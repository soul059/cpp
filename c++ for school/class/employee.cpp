#include<iostream>
using namespace  std;
class employee
{
private:
    string name;
    string city;
    float salary;
    float da,hra,totle;
public:
public:
    void employeeInfo();
    void printInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"City : "<<city<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"DA : "<<da<<"\nHRA : "<<hra<<endl;
        cout<<"Totle :"<<totle<<endl;
    }
    void calculate(){
        totle = salary+((salary*da)/100) + ((salary*hra)/100);
    }
};

void employee::employeeInfo()
{
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter city of the employee";
    getline(cin,city);
    cout<<"\nEnter salary of the employee: ";
    cin>>salary;
    cout<<endl;
    cout<<"Enter Duty allowance (in hours): ";
    cin>>da;
    hra=0.5*salary;
}



int main(){
    employee x;
    x.employeeInfo();
    x.calculate();
    x.printInfo();
    return 0;
}