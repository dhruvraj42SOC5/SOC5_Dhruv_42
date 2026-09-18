#include<iostream>
using namespace std;

class Rectangle
{
    private:
    float l,b;
    
    public:
    void getData()
    {
        cout<<"Enter l:";
        cin>>l;

        cout<<"Enter b:";
        cin>>b;
    }
    float area();
    float perimeter();

    void display()
    {
        cout<<"Area is:"<<area();
        cout<<"Perimeter is:"<<perimeter();
    }
};

float Rectangle::area()
{
    return l*b;
}
float Rectangle::perimeter()
{
    return 2*(l+b);
}
int main()
{
    Rectangle r;
    r.getData();
    r.display();
}