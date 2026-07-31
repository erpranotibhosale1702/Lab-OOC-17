#include<iostream>
using namespace std;
int main(){
    int *arr;
    int size;
    int sum=0;
    cout<<"Enter the size of the integer array: ";
    cin>>size;
    cout<<"Creating an array of size "<<size<<"..";
    arr=new int[size];
   for (int i=0;i<size;i++){
    cout<<"Enter the element arr[i]";
    cin>>arr[i];
   }

   for(int i=0;i<size;i++){
      sum=sum+arr[i];
   }
   cout<<"Sum = "<<sum<<endl;
    cout<<"\nDynamic  allocation of memory for array arr is successful." ;
    delete arr;
    return 0;
}