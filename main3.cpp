#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int choice;
    int num1,num2;
    cout <<"Enter 1st number: ";
    cin >> num1;
    cout <<"Enter 2nd number: ";
    cin >> num2;
    cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
{
    case 1:
        cout << "Addition = " << num1 + num2;
        break;

    case 2:
        cout << "Subtraction = " << num1 - num2;
        break;

    case 3:
        cout << "Multiplication = " << num1 * num2;
        break;

    case 4:
        cout << "Division = " << (float)num1 / num2;
        break;

    case 5:
        cout << "Modulus = " << num1 % num2;
        break;

    case 6:
        cout << "Exit";
        break;

    default:
        cout << "Invalid Choice";
}
return 0;
}
