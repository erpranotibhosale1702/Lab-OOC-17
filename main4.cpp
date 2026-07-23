#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int length,width;
    int area,perimeter;
    cout <<"Enter the width of rectangle: ";
    cin >>width;
    cout <<"Enter the length of rectangle: ";
    cin >>length;
    perimeter=2*(length*width);
    area=length*width;
    cout <<"The perimeter of rectangle is"<< perimeter <<endl;
    cout <<"The area of rectangle is"<< area;
     return 0;

}