#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The new value of a is: "<< a <<endl;
    cout<<"The new value of b is: "<< b <<endl;

}