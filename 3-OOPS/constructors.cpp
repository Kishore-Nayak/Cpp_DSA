#include<iostream>
using namespace std;

class Student{
public:
    string name;
    long long rollNo;
    float cgpa;

    void print()
    {
        cout<<name<<endl;
        cout<<rollNo<<endl;
        cout<<cgpa<<endl;
    }

    //default constructor
    Student()
    {

    }

    //parameterised constructor
    Student(string name,long long rollNo,float cgpa)
    {
        this->name=name;
        this->rollNo=rollNo;
        this->cgpa=cgpa;
    }
};


int main()
{
    Student s1("Kishore Nayak",2302041047,8.94);
    s1.print();

    Student s2;
    s2.name="Nishant Barik";
    s2.rollNo=2302041056;
    s2.cgpa=9.0;
    s2.print();

    Student s3 = s2;  //deep copy
    s3.name = "Raghav";
    Student s4(s1); //copy constructor - deep copy
    s4.name = "Rudrashree";

    s3.print();
    s4.print();
    return 0;
}