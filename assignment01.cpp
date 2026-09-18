#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int rollnumber;
        string name; 
        float marks;

    public:
        void accept()
        {
            cout<<"Enter Roll Number:";
            cin>>rollnumber;

            cout<<"Enter Name:";
            cin.ignore();
            getline(cin,name);

            cout<<"Enter Marks:";
            cin>>marks;
        }
        void calculateResult()
        {
            if(marks>=40)
            cout<<"Result:Pass"<<endl;
            else
            cout<<"Result:Fail"<<endl;
        }
        void display()
        {
            cout<<"\n----Student Details----"<<endl;
            cout<<"Roll Number:"<<rollnumber<<endl;
            cout<<"Student Name:"<<name<<endl;
            cout<<"Marks:"<<marks<<endl;
            

            calculateResult();
        }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;

}
