//write a programe to demonstrate the use of copy constructor

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
    Student()
    {
        count = 0;
        input();
    }
    Student(Student &s)
    {
        cout << "Copy constructor called" << endl;
        name = s.name;
        age = s.age;
        rollNo = s.rollNo;
        course = s.course;
        count++;
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
    Student operator=(const Student &s);
    ~Student()
    {
        count--;
    }
};
int Student::count = 0;
Student Student::operator=(const Student& s)
{
    cout << "Assignment operator called" << endl;
    if (this != &s)
    {
        name = s.name;
        age = s.age;
        rollNo = s.rollNo;
        course = s.course;
    }
    return *this;
}

int main()
{
    Student s1;
    s1.display();
    Student s2;
    s2 = s1; // Fix: Overloaded assignment operator
    s2.display();
    Student s3(s2);
    return 0;
}

// Overloaded assignment operator