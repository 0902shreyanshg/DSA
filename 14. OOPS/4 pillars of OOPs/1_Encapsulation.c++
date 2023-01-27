#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//TODO: Encapsulation is a way to achieve data hiding because other classes will not be able to access the data through the private data members.
//TODO: In Encapsulation, we can hide the data’s internal information, which is better for security concerns.
//TODO: By encapsulation, we can make the class read-only. The code reusability is also an advantage of encapsulation.
//TODO: Encapsulated code is better for unit testing.

class Student {

    private:
    string studentName;
    int studentRollno;
    int studentAge;

    // get method for student name to access
    // private variable studentName
    public:
        string getStudentName() {
            return studentName;
        }
    // set method for student name to set 
    // the value in private variable studentName
    void setStudentName(string studentName) {
        this -> studentName = studentName;
    }

    // get method for student rollno to access  
    // private variable studentRollno
    int getStudentRollno() {
        return studentRollno;
    }
    // set method for student rollno to set 
    // the value in private variable studentRollno
    void setStudentRollno(int studentRollno) {
        this -> studentRollno = studentRollno;
    }

    // get method for student age to access  
    // private variable studentAge
    int getStudentAge() {
        return studentAge;
    }
    // set method for student age to set 
    // the value in private variable studentAge
    void setStudentAge(int studentAge) {
        this -> studentAge = studentAge;
    }
};

int main()
{
    Student obj;
    // setting the values of the variables
    obj.setStudentName("Rahul");
    obj.setStudentRollno(101);
    obj.setStudentAge(22);
    // printing the values of the variables
    cout << "Student Name : " << obj.getStudentName() << endl;
    cout << "Student Rollno : " << obj.getStudentRollno() << endl;
    cout << "Student Age : " << obj.getStudentAge();
    return 0;
}