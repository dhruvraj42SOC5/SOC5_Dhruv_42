#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    int employeeid;
    float basicsalary;
    float bonus;
    float totalsalary;

    public:
    Employee()
    {
        name="unknown";
        employeeid=0;
        basicsalary=0;
        bonus=0;
        totalsalary=0;
    }
    Employee(string n, int id, float s, float b)
    {
        name=n;
        employeeid=id;
        basicsalary=s;
        bonus=b;
    }

        float calculate()
        {
            totalsalary=basicsalary+bonus;
        }

        void display()
        {
            cout<<"Name is "<<name<<endl;
            cout<<"id is "<<employeeid<<endl;
            cout<<"Basic salary is "<<basicsalary<<endl;
            cout<<"Bonus is "<<basicsalary<<endl;
            cout<<"Total Salary is "<<totalsalary<<endl;

        }
};
int main()
{
    Employee e1;
    e1.display();

    Employee e2("John",123,100000,1000);
    e2.display();

    return 0;
}