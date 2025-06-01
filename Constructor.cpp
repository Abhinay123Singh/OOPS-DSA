#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rno;
    float gpa;

    // Default constructor
    Student() {
        name = "Unknown";
        rno = 0;
        gpa = 0.0;
    }

    // Constructor with roll number, GPA, and name
    Student(int r, float g, string s) {
        rno = r;
        gpa = g;
        name = s;
    }

    // Constructor with name, roll number, and GPA
    Student(string s, int r, float g) {
        name = s;
        rno = r;
        gpa = g;
    }
};

int main() {
    // Fix: Provide all 3 arguments as per the constructor
    Student s1("Abhinay Singh", 76, 8.5);

    Student s5(34, 5.3, "Rohit Kumar"); // Using (int, float, string)
     Student s6 = s1;// Deeop copy constructor
     s6.name="Ansh Dubey";
    Student s2; // Uses default constructor
    s2.name = "Abhishek Meena";
    s2.rno = 88;
    s2.gpa = 9.0;

    Student s3("Nishu", 14, 9.4);
    
    // Output
    cout << "Student Details:" << endl;
    cout << s1.name << " " << s1.gpa << " " << s1.rno << endl;
    cout << s5.name << " " << s5.gpa << " " << s5.rno << endl;
    cout << s2.name << " " << s2.gpa << " " << s2.rno << endl;
    cout << s3.name << " " << s3.gpa << " " << s3.rno << endl;
    cout << s6.name << " " << s6.gpa << " " << s6.rno << endl;
    return 0;
}
