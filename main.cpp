#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "The sum of these two numbers is " << a + b << endl;
    cout << "The difference between these two numbers is " << a - b << endl;
    cout << "The arithmetic mean of the absolute values of these two numbers is " << (float) ( abs(a) + abs(b) ) / 2 << endl;
    cout << "The product of two numbers is " << a * b << endl;
    cout << "The quotient of two numbers is " << (float) a / b << endl;



    return 0;
}