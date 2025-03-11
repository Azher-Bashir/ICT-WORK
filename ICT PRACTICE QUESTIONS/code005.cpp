#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open the file to read the three words
    ifstream file("sentence.txt");
    char ch;

    // Read and print the first word
    while (file.get(ch) && ch != ' ') {
        cout.put(ch);
    }
    cout.put(' ');

    // Read and print the second word
    while (file.get(ch) && ch != ' ') {
        cout.put(ch);
    }
    cout.put(' ');

    // Read and print the third word
    while (file.get(ch) && ch != '\n' && file) {
        cout.put(ch);
    }
    cout.put('\n');

    file.close();

    return 0;
}
