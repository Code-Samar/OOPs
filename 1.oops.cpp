//oop

#include<iostream>
#include<string>
using namespace std;

class Teacher{                                    //class name
public:                                          //accessible to all
    // Constructor
    Teacher(){
        // cout<<"Hi, I am the constructor\n";
        // dep="cse"; 
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
};

int main() {
    // Object
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    // t1.dep = "CSE";
    t1.salary = 25000;

    cout << t1.name << endl;
    cout << t1.dep << endl;

    return 0;
}
