#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int roll_no;

    //constructor
    student(string a,int b,int c)
    {
        name=a;
        age=b;
        roll_no=c;
        //cout<<"Default construtor is called"<<endl;
    }

    void displayInfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    student s1("Adarsh",24,2);
    s1.name="Adarsh";
    s1.age=20;
    s1.roll_no=2;
    s1.displayInfo();
    return 0;
}