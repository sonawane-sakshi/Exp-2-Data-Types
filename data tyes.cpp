//sakshi Sonawane 
//Entc A
//PRN: 24070123505
//Experiment- 2
#include <iostream>
#include <string> // Include for string
using namespace std;
int main() {
    int int_v;
    cout << "Size of integer is: " << sizeof(int_v) << " bytes" << endl;

    float float_v;
    cout << "Size of float is: " << sizeof(float_v) << " bytes" << endl;

    double double_v;
    cout << "Size of double is: " << sizeof(double_v) << " bytes" << endl;

    char char_v;
    cout << "Size of character is: " << sizeof(char_v) << " bytes" << endl;

    string string_v;
    cout << "Size of string object is: " << sizeof(string_v) << " bytes" << endl;

    bool bool_v;
    cout << "Size of boolean is: " << sizeof(bool_v) << " bytes" << endl;

    const int const_int_v = 10;
    cout << "Size of constant integer is: " << sizeof(const_int_v) << " bytes" << endl;

    return 0;
}
/*
Size of integer is: 4 bytes
Size of float is: 4 bytes
Size of double is: 8 bytes
Size of character is: 1 bytes
Size of string object is: 8 bytes
Size of boolean is: 1 bytes
Size of constant integer is: 4 bytes
*/

