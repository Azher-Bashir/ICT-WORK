//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class sparse_matrix
//{
//private:
//    int rows;
//    int cols;
//    int non_zero_rows;
//    int** matrix;
//public:
//    sparse_matrix();
//    sparse_matrix(int, int);
//    void set_rows(int);
//    void set_cols(int);
//    int get_rows();
//    int get_cols();
//    int** creat_matrix(int, int);
//    void sparse(int, int, int);
//};
//
//sparse_matrix::sparse_matrix()
//{
//
//}
//sparse_matrix::sparse_matrix(int row, int col)
//{
//    rows = row;
//    cols = col;
//}
//void sparse_matrix::set_rows(int row)
//{
//    rows = row;
//}
//void sparse_matrix::set_cols(int cols)
//{
//    this->cols = cols;
//}
//int sparse_matrix::get_rows()
//{
//    return rows;
//}
//int sparse_matrix::get_cols()
//{
//    return cols;
//}
//
//int main()
//{
//    int rows;
//    cin >> rows;
//    sparse_matrix sm(3, 3);
//    sm.set_rows(rows);
//    sm.set_cols(3);
//    cout << "Rows: " << sm.get_rows() << endl;
//    cout << "Cols: " << sm.get_cols() << endl;
//    return 0;
//}
//
