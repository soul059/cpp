#include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;

    void getdata(){
        cout<<"Enter Roll No: "<<endl;
        cin>>rollno;
        cin.ignore();                   //this is used for ignode un wanted \n;
        cout<<"Enter Name :"<<endl;
        getline(cin,name);
    }

    void  printInfo(){
        cout<<"\nRoll no = " << rollno ;
        cout<< "\nName = " << name ;
    }
};

int main(){
    student s;
    s.getdata();
    s.printInfo();
    return 0;
}