// copy custructor

#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    // Parameterized Constructor
    Teacher(string name, string dep, string subject, double salary){
       this-> name = name;
       this-> dep = dep;
       this-> subject = subject;
       this-> salary = salary;
    }

    //  copy custructor
    Teacher(Teacher &orgObj){
        cout<<"i am custom copy custructor";
        this -> name=orgObj.name;
        this -> dep=orgObj.dep;
        this -> subject=orgObj.subject;

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

    // t1.getInfo();
    Teacher t2(t1);
    t2.getInfo(); 

    return 0;
}
