#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    char b[10];
    void getdata()
    {
        cout<<"Enter the number";
        cin>>a;
        cout<<"Enter the name";
        cin>>b;
    }
    void displaydata()
    {
        cout<<"Enter the number";
        cin>>a;
        cout<<"Enter the name";
        cin>>b;
    }
};
int main()
{
    base a1;
    a1.getdata();
    a1.displaydata();
}