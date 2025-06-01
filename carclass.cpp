#include<iostream>
using namespace std;
class Car {
public:
    string name;
    int price;
    int seats;
    string type;
    
    Car(string n, int p, int s, string t) {
        name = n;
        price = p;
        seats = s;
        type = t;
    }
};

void print(Car c) {
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << endl;
}

void change(Car& c) { // pass by reference
    c.name = "Audi A8";
}

int main() {
    Car c1("Honda City", 150000, 5, "Sedan");
    print(c1);
    change(c1); // passed by reference
    print(c1);
    return 0;
}
