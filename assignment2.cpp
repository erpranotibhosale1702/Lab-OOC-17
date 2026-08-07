#include<iostream>
#include<string>
using namespace std;
class Student{
private:
  string name;
  int rollNo;
  float marks;
  
  public:
  void inputDetails(){
    cout<<"Enter Student Name: ";
    getline(cin >> ws,name);
    cout<<"Enter Roll Number:";
    cin>>rollNo;
    cout<<"Enter Marks";
    cin>>marks;
  }
  void displayDetails() const{
    cout<<"\n----Students Details----\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No.: "<<rollNo<<endl;
    cout<<"Marks: "<<marks<<endl;

  }
  
};
int main(){
    Student s,s1,s2;
    s.inputDetails();
    s.name="Tony Shark";
    s.displayDetails();
    s1.inputDetails();
    s1.displayDetails();
    inputDetails();
    
    return 0;
} 
  