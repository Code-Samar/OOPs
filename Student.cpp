//student

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // Properties/attributes
    string name;
    double cgpa;  // Changed from string to double
    
    // Parameterized constructor
    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
    }

// copy custructor
    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    void getInfo() {
        cout << "Name: " << name << endl; 
        cout << "CGPA: " << cgpa << endl; 
    }
};

int main() {
    // Creating an object
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);
    // Displaying the information
    s2.getInfo();

    return 0;
}


