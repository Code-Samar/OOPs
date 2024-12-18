//cunst

#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:

// properties/attribute
    string name;
    string dept;
    string subject;
    double salary;

//parametrerized custructor
    Teacher(string n, string d, string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;

    }

/*
// this pointer
    Teacher(string name, string dept, string subject, double salary){
       this-> name=name;
       this-> dept=dept;
       this-> subject=subject;
       this-> salary=salary;

    }
*/

//copy custructor
Teacher(Teacher &orgObj) //pass by refrence
{
    cout<< "i am copy cunstructor......\n";
    this-> name=orgObj.name;
    this-> dept=orgObj.dept;
    this-> subject=orgObj.subject;
    this-> salary=orgObj.salary;

}


// methods / member function   
    void changeDep(string newDep){
        dept=newDep;
    }

    void getInfo(){
        cout << "name :" << name << endl;
        cout << "Subject :" << subject << endl;
    }
};


int main() {
// object
    Teacher t1("shradha", "CSE", "C++", 25000);

    Teacher t2(t1); //custom copy cunstructor
    t2.getInfo(); 

    return 0;
}

