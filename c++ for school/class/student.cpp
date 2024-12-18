//make class student and implement the following functions input and displaying output
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int rollNo;
    string course;
    static int count;

public:
//constructor to initialize the count to 0 and give initial values to the variables from user
    Student()
    {
        count = 0;
        input();
    }
    void input()
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the age of the student: ";
        cin >> age;
        cout << "Enter the roll number of the student: ";
        cin >> rollNo;
        cout << "Enter the course of the student: ";
        cin >> course;
        count++;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
        cout << "Number of students: " << count << endl;
    }
};
int Student::count = 0;

int main(){
    Student s1;
    s1.display();
    Student s2;
    s2.display();
    return 0;
}