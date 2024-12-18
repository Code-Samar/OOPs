//pyq student

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    // Default Constructor
    Student() {
        name = "unknown";
        age = 0;
        add = "not available";
    }

    // Parameterized Constructor
    Student(string n, int a, string ad) {
        name = n;
        age = a;
        add = ad;
    }

    // Properties/Attributes
    string name;
    int age;
    string add;

    // Methods / Member Functions
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << add << endl << endl;
    }
};

int main() {
    // Array of 10 Students, all initialized with the default constructor
    Student students[10]; // This will create 10 student objects using the default constructor

    // Display information of all students
    for(int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << endl;
        students[i].getInfo();
    }

    return 0;
}
