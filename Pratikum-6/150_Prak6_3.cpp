#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("file.txt");

    int num;
    int redeemCode = 0;
    bool barisGanjil = true; 

    while (inputFile >> num) {
        if (barisGanjil) {
            redeemCode += num;
        }
        barisGanjil = !barisGanjil;
    }

    inputFile.close();
    cout << "Kode Redeem : " << redeemCode << endl;
    return 0;
}
