#include <iostream>
#include <string>
#include <sstream>

using namespace std; 

int main() {
    string input;
    
    cout << "Masukkan kalimat: ";
    cin >> input; 

    istringstream iss(input);
    string lastWord;
    string word;

    while (iss >> word) {
        lastWord = word;
    }

    cout << "Ini adalah jiko: " << lastWord << endl;

    return 0;
}
