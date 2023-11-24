#include<iostream>
using namespace std;
class base{
    public:
    int a ;
    char name [20];

    void q()
    {
        cout<<"Enter the number";
        cin>>a;
        cout<<"Enter the name";
        cin>>name ;
    }
    void w()
    {
        cout<<"Enter the number";
        cin>>a;
        cout<<"Enter the name";
        cin>>name ;
        
    }
};
class p : public base {
    public:
    int b;
    char n[20];
    void e()
    {
        cout<<"Enter the number";
        cin>>b;
        cout<<"Enter the name";
        cin>>n;
    }
    void r()
    {
        cout<<"Enter the number";
        cin>>b;
        cout<<"Enter the name";
        cin>>n ;
    }
};
class c : public base {
    public:
    int z;
    char x[25];
    void t()
    {
        cout<<"Enter the number";
        cin>>z;
        cout<<"Enter the name";
        cin>>x ;
    }
    void y()
    {
        cout<<"Enter the number";
        cin>>z;
        cout<<"Enter the name";
        cin>>x ;
    }
};
class d : public p{
    int m;
    char l[30];
    void u()
    {
        cout<<"Enter the number";
        cin>>m;
        cout<<"Enter the name";
        cin>>l;
    }
    void i()
    {
        cout<<"Enter the number";
        cin>>m;
        cout<<"Enter the name";
        cin>>l;
    }
};
class e : public d{
    int k;
    char j[35];
    void o()
    {
        
        cout<<"Enter the number";
        cin>>k;
        cout<<"Enter the name";
        cin>>j;
    }
    void op()
    {
        i();
        cout<<"Enter the number";
        cin>>k;
        cout<<"Enter the name";
        cin>>j;

    }
};
