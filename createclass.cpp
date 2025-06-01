#include<iostream>
using namespace std;
class Animal{
    // state or properties
    public:
int age;
string name;
//behavior 
void eat()
{
cout<<"Eating"<<endl;
}
void sleep()
{
cout<<"Eating"<<endl;
}
}
char ch;
int main()
{
// object creation
// static
Animal ramesh;
// dynamic
ramesh.age=5;
ramesh.name="Ramesh";
cout<<"Age of ramesh is:"<<ramesh.age<<endl;
cout<<"Name of Empty Class is:"<<ramesh.name<<endl;
ramesh.eat();
ramesh.sleep();
return 0;
}
