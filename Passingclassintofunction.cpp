#include<iostream>
using namespace std;
class Car{
    public:
int price;
string name;
};
// void change(int x)
// {
//     x=10;
// }
void change(Car* x)
{
    // (*x).name="Honda Amaze";
    // (*x).price=800000;
    // 2way to access members of the class
    x->name="Honda Amaze"; // Using arrow operator to access members of the class
    x->price=800000; // Using arrow operator to access members of the class
//a->b means(*a).b
}
int main()
{

Car c1={1200000,"Kia Sonet"};
cout<<c1.name<<" "<<c1.price<<endl;
change(&c1);
cout<<c1.name<<" "<<c1.price<<endl; // This will still print the original values // pass by values1
}