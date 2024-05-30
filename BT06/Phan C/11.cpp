#include <bits/stdc++.h>  
using namespace std;

string decToBin(int n) {
    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary.empty() ? "0" : binary;
}

int binToDec(const string& binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.size() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        ++power;
    }
    return decimal;
}

int main() {
    int decimal = 42;
    string binary = decToBin(decimal);
    cout << "Số " << decimal << " trong hệ nhị phân là: " << binary << "\n";
    
    string binaryNumber = "101010";
    int decimalNumber = binToDec(binaryNumber);
    cout << "Số " << binaryNumber << " trong hệ thập phân là: " << decimalNumber << "\n";
    
    return 0;
}