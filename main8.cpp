#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number"<<endl;
    cin>>a;
    cout<<"Enter 2nd number"<<endl;
    cin>>b;
    cout<<"Enter 3rd number"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is the largest";
        }
        else{
            cout<<"c is the largest";
        }
    }
        else{
            if(b>c){
                cout<<"b is the largest";
            }
            else{
                cout<<"c is the largest";
            }
        }
    }

