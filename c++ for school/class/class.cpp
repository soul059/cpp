#include<iostream>
using namespace  std;

class student
{
    string s;
    int rollno;
public:
    void getInfo();
    void printInfo(){
        cout<<"name is :"<<s<<"\n and \nroll no is: "<<rollno<<endl;
    }
};

void student::getInfo()
{
    cout<<"enter name: ";
    getline(cin,s);
    cout<<"enter roll no: ";
    cin>>rollno;
}


int main(){
    student s1;
    s1.getInfo();
    s1.printInfo();
    return 0;
}