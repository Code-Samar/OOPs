//cunstrucor

#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    // Parameterized Constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dep = d;
        subject = s;
        salary = sal;
    }

    // Properties/Attributes
    string name;
    string dep;
    string subject;
    double salary;

    // Methods / Member Function   
    void changeDep(string newDep){
        dep = newDep;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dep << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Object
    Teacher t1("Shradha", "CSE", "C++", 25000);

    t1.getInfo();

    return 0;
}
