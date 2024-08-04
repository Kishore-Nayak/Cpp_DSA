#include<iostream>
using namespace std;
class Student{ //Student is a new data type
public:
    string name;
    float cgpa;    //data members (variables in class)
    int rollNo;

    void showCgpa()     //member function (functions inside class)
    {
        cout<<"CGPA is : "<<cgpa<<endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Kishore";
    s1.cgpa = 8.94;
    s1.rollNo = 47;

    s1.showCgpa();

/*    Student s2;
    s2.cgpa = 9.30;
    s2.name = "Nishant";
    s2.rollNo = 56;

    Student s3;
    s3.name = "Rudrashree";
    s3.cgpa = 9.16;
    s3.rollNo = 57;


    cout<<s1.name<<endl;
    cout<<s2.name<<endl;
    cout<<s3.name<<endl;

    cout<<s1.cgpa<<endl;
    cout<<s2.cgpa<<endl;
    cout<<s3.cgpa<<endl;

    cout<<s1.rollNo<<endl;
    cout<<s2.rollNo<<endl;
    cout<<s3.rollNo<<endl;
*/
    return 0;
}