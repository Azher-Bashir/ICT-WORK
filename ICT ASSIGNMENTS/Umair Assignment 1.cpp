//Objective:
//The aim of this assignment is to develop a memory - efficient Sparse Matrix Calculator in C++ using pointers.You will implement functions to perform matrix addition, subtraction, multiplication, and transpose operations.This assignment will help you understand the concepts of pointers, dynamic memory allocation, and efficient data storage techniques.
//Background :
//	A sparse matrix is a matrix in which most of the elements are zero.Storing all elements(including zeros) in memory is not efficient.To overcome this, we store only non - zero elements along with their positions.
//	Requirements :
//	1.
//	Data Storage :
//o
//Each row of the matrix should be stored as a dynamic array containing non - zero entries and their positions(column numbers).
//2.
//Operations :
//	o
//	Addition : Implement a function to add two sparse matrices and return the resultant.
//	o
//	Subtraction : Implement a function to subtract one sparse matrix from another and return the resultant.
//	o
//	Multiplication : Implement a function to multiply two sparse matrices and return the resultant.
//	o
//	Transpose : Implement a function to transpose a sparse matrix.
//	Assignment Details :
//Each sparse matrix has dimensions(number of rows and columns) and its data(values).For example consider the following sparse matrix of dimension 4x6
//0
//0
//1
//0
//8
//0
//4
//0
//0
//0
//7
//0
//0
//0
//3
//0
//0
//0
//0
//0
//0
//4
//0
//0
//The sparse representation will be as follows :
//2
//2
//1
//4
//8
//2
//0
//4
//4
//7
//1
//2
//3
//1
//3
//4
//Here the first entry mentions the total number of non - zero entries followed by colum number and data value of each non - zero entry.The first row has 2 non - zero entries.First one at column 2 and value 1. Second one is at column 4 and value 8.
//Your task is to define the following functions :
//Input matrix : given a matrix in a text file(format explained below) create a sparse matrix in the memory.
//Input File Format :
//4 6
//2 2 1 4 8
//2 0 4 4 7
//1 2 3
//1 3 4
//first line will contain two integers space separated mentioning the rows and columns of the matrix.In the sample above there are 4 rows and six columns.Each line after the first line has the following format.Number of non - zero entries followed by column number and value pairs(all space separated).In the sample above second line states that row 0 has 2 non zero entries.First non - zero entry is at column number 2 and its value is 1. Second non - zero entry is at column number 4 and its value is 8.
//Output matrix : Output a sparse matrix in standard form(both zero and non - zero entries)
//Add : Add two sparse matrices is they are compatible for addition and return the resultant sparse matrix
//Subtract : Subtract two sparse matrices is they are compatible for subtraction and return the resultant sparse matrix
//Multiply : Multiply two sparse matrices is they are compatible for multiplication and return the resultant sparse matrix
//Transpose : Transpose a given sparse matrix
//Memory Management : Ensure proper memory allocation.No extra memory allocations will be performed during the above mentioned operations and deallocate all the unnecessary memory to avoid memory leaks.
//Assignment Tasks :
//1.
//Implement the add, subtract, multiply, and transpose functions using the given explanation.
//2.
//Ensure memory efficiency by storing only non - zero elements and their positions.
//3.
//Write a main function to demonstrate matrix addition, subtraction, multiplication, and transpose with appropriate examples.
//4.
//Include comments and documentation to explain your code.
//Submission:
//•
//Submit a single.cpp file containing your implementation.
//•
//Ensure that your code is well - documented and follows good coding practices.
//Evaluation Criteria :
//•
//Correctness : Ensure that all operations produce accurate results.
//•
//Memory Efficiency : Use pointers and dynamic memory allocation appropriately.
//•
//Code Quality : Follow best coding practices, including meaningful variable names, comments, and formatting.
//Good luck, and happy coding!

