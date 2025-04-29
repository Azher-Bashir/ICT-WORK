# include "PF_Assigment.h"

Sparse_Matrix::Sparse_Matrix(int rows, int cols)
{
    this->Rows = rows;
    this->Columns = cols;
    non_zero = new int[rows](); // Initialize to zero
    Sparse_Rep = nullptr;
    Matrix = nullptr;
}

Sparse_Matrix::Sparse_Matrix()
{
    Rows = 0;
    Columns = 0;
    non_zero = nullptr;
    Sparse_Rep = nullptr;
    Matrix = nullptr;
}

void Sparse_Matrix::set_row(int r)
{
    Rows = r;
    if (non_zero)
        delete[] non_zero;
    non_zero = new int[r]();
}

void Sparse_Matrix::set_columns(int c)
{
    Columns = c;
}

void Sparse_Matrix::set_Non_zero(int* non_zero)
{
    if (this->non_zero)
        delete[] this->non_zero;
    this->non_zero = new int[Rows];
    for (int i = 0; i < Rows; i++)
        this->non_zero[i] = non_zero[i];
}

void Sparse_Matrix::set_Sparse_rep(int** sparse_rp)
{
    if (Sparse_Rep)
    {
        for (int i = 0; i < Rows; i++)
            delete[] Sparse_Rep[i];
        delete[] Sparse_Rep;
    }

    Sparse_Rep = new int* [Rows];
    for (int i = 0; i < Rows; i++)
    {
        int elements = 2 * non_zero[i] + 1;
        Sparse_Rep[i] = new int[elements];
        for (int j = 0; j < elements; j++)
            Sparse_Rep[i][j] = sparse_rp[i][j];
    }
}
int* Sparse_Matrix::get_non_zero()
{
    return non_zero;
}

int Sparse_Matrix::get_rows()
{
    return Rows;
}

int Sparse_Matrix::get_cols()
{
    return Columns;
}
void Sparse_Matrix::Sparse_converter()
{
    if (Matrix)
    {
        for (int i = 0; i < Rows; i++)
            delete[] Matrix[i];
        delete[] Matrix;
    }

    Matrix = new int* [Rows];
    for (int i = 0; i < Rows; i++)
    {
        Matrix[i] = new int[Columns](); // Initialize to zero
    }

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < non_zero[i]; j++)
        {
            int col_no = Sparse_Rep[i][2 * j + 1];
            int value = Sparse_Rep[i][2 * j + 2];

            if (col_no >= 0 && col_no < Columns)
                Matrix[i][col_no] = value;
            else
                cerr << "Error: Column index out of bounds at row " << i << endl;
        }
    }
}

int** Sparse_Matrix::sparse_to_dense() const
{
    int** dense = new int* [Rows];
    for (int i = 0; i < Rows; i++)
    {
        dense[i] = new int[Columns]();
        for (int j = 0; j < non_zero[i]; j++)
        {
            int col = Sparse_Rep[i][2 * j + 1];
            int val = Sparse_Rep[i][2 * j + 2];
            dense[i][col] = val;
        }
    }
    return dense;
}

Sparse_Matrix Sparse_Matrix::Addition_operation(const Sparse_Matrix& sp1, const Sparse_Matrix& sp2)
{
    if (sp1.Rows != sp2.Rows || sp1.Columns != sp2.Columns)
    {
        cerr << "!!! MATRIX ADDITION IS NOT POSSIBLE !!!" << endl;
        return Sparse_Matrix();
    }

    Sparse_Matrix result(sp1.Rows, sp1.Columns);
    result.Matrix = new int* [result.Rows];
    for (int i = 0; i < result.Rows; i++)
    {
        result.Matrix[i] = new int[result.Columns];
        for (int j = 0; j < result.Columns; j++)
        {
            result.Matrix[i][j] = sp1.Matrix[i][j] + sp2.Matrix[i][j];
        }
    }

    // Convert back to sparse representation
    result.non_zero = new int[result.Rows]();
    result.Sparse_Rep = new int* [result.Rows];

    for (int i = 0; i < result.Rows; i++)
    {
        // Count non-zero elements in this row
        int count = 0;
        for (int j = 0; j < result.Columns; j++)
        {
            if (result.Matrix[i][j] != 0)
                count++;
        }
        result.non_zero[i] = count;

        // Create sparse representation
        result.Sparse_Rep[i] = new int[2 * count + 1];
        result.Sparse_Rep[i][0] = count;

        int index = 1;
        for (int j = 0; j < result.Columns; j++)
        {
            if (result.Matrix[i][j] != 0)
            {
                result.Sparse_Rep[i][index++] = j;                   // Column
                result.Sparse_Rep[i][index++] = result.Matrix[i][j]; // Value
            }
        }
    }

    return result;
}

Sparse_Matrix Sparse_Matrix::Subtraction_operation(const Sparse_Matrix& sp1, const Sparse_Matrix& sp2)
{
    if (sp1.Rows == sp2.Rows && sp1.Columns == sp2.Columns)
    {
        int** subtract_result = new int* [Rows];
        int* subtract_non_zero = new int[Rows];
        bool all_zero = true; // Flag to check if all entries are zero

        for (int i = 0; i < Rows; i++)
        {
            int max_non_zero = sp1.non_zero[i] + sp2.non_zero[i];
            subtract_result[i] = new int[2 * max_non_zero + 1];
            subtract_result[i][0] = 0; // Initialize the count of non-zero elements
            int k = 1;                 // Index for subtract_result
            int j1 = 1, j2 = 1;        // Indices for sparse_rep and other.sparse_rep

            // Traverse through both sparse representations and subtract the values
            while (j1 < 2 * sp1.non_zero[i] + 1 && j2 < 2 * sp2.non_zero[i] + 1)
            {
                if (sp1.Sparse_Rep[i][j1] < sp2.Sparse_Rep[i][j2]) // First matrix index smaller
                {
                    subtract_result[i][k++] = sp1.Sparse_Rep[i][j1++]; // Add column index from the first matrix
                    subtract_result[i][k++] = sp1.Sparse_Rep[i][j1++]; // Add value from the first matrix
                    all_zero = false;                                  // Found a non-zero element
                }
                else if (sp1.Sparse_Rep[i][j1] > sp2.Sparse_Rep[i][j2]) // Second matrix index smaller
                {
                    subtract_result[i][k++] = sp2.Sparse_Rep[i][j2++];  // Add column index from the second matrix
                    subtract_result[i][k++] = -sp2.Sparse_Rep[i][j2++]; // Subtract value from the second matrix
                    all_zero = false;                                   // Found a non-zero element
                }
                else // Both matrices have non-zero elements at the same position
                {
                    subtract_result[i][k++] = sp1.Sparse_Rep[i][j1++];            // Column index is the same for both
                    int diff = sp1.Sparse_Rep[i][j1++] - sp2.Sparse_Rep[i][++j2]; // Subtract the values
                    j2++;
                    if (diff != 0)
                    {
                        subtract_result[i][k++] = diff; // Add the difference if it's non-zero
                        all_zero = false;               // Found a non-zero element
                    }
                }
            }

            // Add remaining elements from the first matrix, if any
            while (j1 < 2 * sp1.non_zero[i] + 1)
            {
                subtract_result[i][k++] = sp1.Sparse_Rep[i][j1++];
                subtract_result[i][k++] = sp1.Sparse_Rep[i][j1++];
                all_zero = false; // Found a non-zero element
            }

            // Add remaining elements from the second matrix, if any
            while (j2 < 2 * sp2.non_zero[i] + 1)
            {
                subtract_result[i][k++] = sp2.Sparse_Rep[i][j2++];
                subtract_result[i][k++] = -sp2.Sparse_Rep[i][j2++];
                all_zero = false; // Found a non-zero element
            }

            subtract_result[i][0] = (k - 1) / 2;          // Update the count of non-zero elements
            subtract_non_zero[i] = subtract_result[i][0]; // Store the count of non-zero elements in this row
        }

        if (all_zero)
        {
            // If all entries are zero, update the sparse representation accordingly
            for (int i = 0; i < Rows; i++)
            {
                delete[] subtract_result[i];
                subtract_result[i] = new int[1];
                subtract_result[i][0] = 0;
                subtract_non_zero[i] = 0;
            }
        }

        Sparse_Matrix result(Rows, Columns);
        result.set_Non_zero(subtract_non_zero); // Set non-zero element counts for the result
        result.set_Sparse_rep(subtract_result); // Set sparse representation for the result
        result.Sparse_converter();              // Convert sparse representation to dense format
        return result;
    }

    else
    {
        cout << "!!! MATRIX ADDITION IS NOT POSSIBLE !!!";
        return Sparse_Matrix();
    }
}

void Sparse_Matrix::print_Matrix()
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            cout << Matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void Sparse_Matrix::print_sparse_matrix()
{
    cout << "Sparse Matrix Representation:" << endl;
    for (int i = 0; i < Rows; i++)
    {
        cout << "Row " << i << ": ";
        for (int j = 0; j < 2 * non_zero[i] + 1; j++)
        {
            cout << Sparse_Rep[i][j] << " ";
        }
        cout << endl;
    }
}

Sparse_Matrix::~Sparse_Matrix()
{
    if (Matrix)
    {
        for (int i = 0; i < Rows; i++)
            delete[] Matrix[i];
        delete[] Matrix;
    }

    if (non_zero)
        delete[] non_zero;

    if (Sparse_Rep)
    {
        for (int i = 0; i < Rows; i++)
            delete[] Sparse_Rep[i];
        delete[] Sparse_Rep;
    }
}

Sparse_Matrix Sparse_Matrix::transpose()
{
    int** transposed_sparse_rep = new int* [Columns];
    int* transposed_non_zero = new int[Columns]();

    // Count the number of non-zero elements in each column
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 1; j < 2 * non_zero[i] + 1; j += 2)
        {
            int col = Sparse_Rep[i][j];
            transposed_non_zero[col]++;
        }
    }

    // Allocate memory for the transposed sparse representation
    for (int i = 0; i < Columns; i++)
    {
        transposed_sparse_rep[i] = new int[2 * transposed_non_zero[i] + 1];
        transposed_sparse_rep[i][0] = transposed_non_zero[i];
    }

    // Fill the transposed sparse representation
    int* current_index = new int[Columns]();
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 1; j < 2 * non_zero[i] + 1; j += 2)
        {
            int col = Sparse_Rep[i][j];
            int value = Sparse_Rep[i][j + 1];
            int index = current_index[col] * 2 + 1;
            transposed_sparse_rep[col][index] = i;
            transposed_sparse_rep[col][index + 1] = value;
            current_index[col]++;
        }
    }

    delete[] current_index;

    Sparse_Matrix transposed_matrix(Columns, Rows);
    transposed_matrix.set_Non_zero(transposed_non_zero);
    transposed_matrix.set_Sparse_rep(transposed_sparse_rep);
    transposed_matrix.Sparse_converter();

    return transposed_matrix;
}

void convert_dense_to_sparse(int** dense_matrix, int rows, int cols, int*& result_non_zero, int**& result_sparse_rep)
{
    result_non_zero = new int[rows]();
    result_sparse_rep = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        int count = 0;
        for (int j = 0; j < cols; j++)
        {
            if (dense_matrix[i][j] != 0)
            {
                count++;
            }
        }
        result_non_zero[i] = count;
        result_sparse_rep[i] = new int[2 * count + 1];
        result_sparse_rep[i][0] = count;
        int index = 1;
        for (int j = 0; j < cols; j++)
        {
            if (dense_matrix[i][j] != 0)
            {
                result_sparse_rep[i][index++] = j;
                result_sparse_rep[i][index++] = dense_matrix[i][j];
            }
        }
    }
}

Sparse_Matrix Sparse_Matrix::multiply_matrix(const Sparse_Matrix& sp1, const Sparse_Matrix& sp2)
{
    if (sp1.Columns != sp2.Rows)
    {
        cout << "!!! MATRIX MULTIPLICATION IS NOT POSSIBLE !!!";
        return Sparse_Matrix();
    }

    // Convert both matrices to dense format
    int** dense_matrix1 = sp1.sparse_to_dense();
    int** dense_matrix2 = sp2.sparse_to_dense();

    // Initialize the result matrix
    int** result_matrix = new int* [sp1.Rows];
    for (int i = 0; i < Rows; i++)
    {
        result_matrix[i] = new int[sp2.Columns]();
    }

    // Perform matrix multiplication
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < sp2.Columns; j++)
        {
            for (int k = 0; k < sp1.Columns; k++)
            {
                result_matrix[i][j] += dense_matrix1[i][k] * dense_matrix2[k][j];
            }
        }
    }

    // Convert the result matrix back to sparse format
    int* result_non_zero;
    int** result_sparse_rep;
    convert_dense_to_sparse(result_matrix, sp1.Rows, sp2.Columns, result_non_zero, result_sparse_rep);

    Sparse_Matrix result(sp1.Rows, sp2.Columns);
    result.set_Non_zero(result_non_zero);
    result.set_Sparse_rep(result_sparse_rep);
    result.Sparse_converter();

    // Free allocated memory
    for (int i = 0; i < sp1.Rows; i++)
    {
        delete[] dense_matrix1[i];
        delete[] result_matrix[i];
        if (result_sparse_rep) delete[] result_sparse_rep[i];
    }
    delete[] dense_matrix1;
    delete[] dense_matrix2;
    delete[] result_matrix;
    delete[] result_non_zero;
    delete[] result_sparse_rep;

    return result;
}