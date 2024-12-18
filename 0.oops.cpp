#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:

//properties / attribute
    string name;
    string dep;
    string subject;
    double salary;


void changeDep(string NewDepart){
    dep=NewDepart;
}

};

int main(){
    Teacher T1;
    T1.name = "Samar";
    T1.subject="Computer Science";
    T1.salary=0000000;
    cout<<T1.name<<endl;
    cout<<T1.subject<<endl;
    cout<<T1.salary<<endl;
    return 0;

}