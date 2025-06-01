#include<iostream>
using namespace std;
class Student{
    public:
string name;
int rno;
float gpa;
};
class Car{
    public:
string name;
int price;
int seats;
string type;

};
int main()
{
Student s1;
s1.name="Abhinay Singh";

s1.rno=84;
s1.gpa=8.5;
cout << "Enter new roll number for s1:";
cin>>s1.rno;
Student s2;
s2.name="Abhishek meena";
s2.rno=88;
s2.gpa=9.0;
cout << "Student 2 details:\n";
cout<<s2.name<<endl;
cout<<s2.rno<<endl;
cout<<s2.gpa<<endl;
cout<<s1.name<<endl;
cout<<s1.rno<<endl;
cout<<s1.gpa<<endl;
}