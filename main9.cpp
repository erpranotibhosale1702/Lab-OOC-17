#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int num,fact;
    fact=1;
    int i=1;
    cout<<"Enter the number:";
    cin>>num;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    cout<<"The value of factorial is: "<<fact;
}
