#include<iostream>
using namespace std;

class main
{
     public: 
     int number;
     char name[20];
     void q()
     {
        cout <<"Enter the number";
        cin>>number;
        cout <<"Enter the name";
        cin>>name;
     }
     void w()
     {
        cout <<"Enter the number";
        cin>>number;
        cout <<"Enter the name";
        cin>>name;
     }
};
class object : public main{
    public:
    int num1;
    char name2[30];
    void e()
     {
        cout <<"Enter the number";
        cin>>num1;
        cout <<"Enter the name";
        cin>>name2;
     }
     void r()
     {
        cout <<"Enter the number";
        cin>>num1;
        cout <<"Enter the name";
        cin>>name2;
     }
class chem : public main{
    public:
    int num2;
    char name3[35];
    void t()
     {
        cout <<"Enter the number";
        cin>>num2;
        cout <<"Enter the name";
        cin>>name3;
     }
     void y()
     {
        cout <<"Enter the number";
        cin>>num2;
        cout <<"Enter the name";
        cin>>name3;
     }
};
int main()
{
    chem object2;
    object2.t();
    object2.y();
}