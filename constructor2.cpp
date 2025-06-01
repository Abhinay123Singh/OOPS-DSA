#include<iostream>
using namespace std;

class Student {
  public:
    string name;
    int rno;
    float gpa;
    Student(string x,int y,float z)
    {
    gpa=z;
    rno=y;
    name=x;

    }

        //defaukt constructor
    
};

    // Constructor with name, roll number, and GPA
    int main()
    {
       
    // 2 way to declare a class and intilaize 
    Student s1={"Abhishek Meena",88,9.0};
    // 3 way using constructor
    Student s2=new Student{"dheeraj",14,9.4};
    }
