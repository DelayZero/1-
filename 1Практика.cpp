#include <iostream>
#include <bitset>
using namespace std;


string bitwise_add(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong();
    int n2 = bitset<8>(num2).to_ulong();
    return bitset<8>(n1 + n2).to_string();
}


string bitwise_sub(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); 
    int n2 = bitset<8>(num2).to_ulong();
    return bitset<8>(n1 - n2).to_string(); 
}

// Функция для поразрядного умножения двоичных чисел
string bitwise_mul(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong(); 
    int n2 = bitset<8>(num2).to_ulong(); 
    return bitset<8>(n1 * n2).to_string(); 
}

string bitwise_div(string num1, string num2) {
    int n1 = bitset<8>(num1).to_ulong();
    int n2 = bitset<8>(num2).to_ulong();
    return bitset<8>(n1 / n2).to_string();
}
int main() {
    string num1 = "1011101"; 
    string num2 = "1001011";

    cout << "Bitwise Addition: " << bitwise_add(num1, num2) << endl;
    cout << "Bitwise Subtraction: " << bitwise_sub(num1, num2) << endl;
    cout << "Bitwise Multiplication: " << bitwise_mul(num1, num2) << endl;
    cout << "Bitwise Division: " << bitwise_div(num1, num2) << endl;

    return 0;
}