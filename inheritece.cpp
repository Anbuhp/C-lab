#include<iostream>
using namespace std;
class A
{
    public:
   int a,b;
   void get1()
   {
       cout<<"Enter value for a & b  "<<endl;
       cin>>a>>b;
   }
};
class B
{
    public:
   int s,t;
   void get2()
   {
       cout<<"Enter value for s & t "<<endl;
       cin>>s>>t;
   }
};
class C :public A
{
    int c;
    public:
    void mul()
    {
        c=a*b;
        cout<<"Multiple of "<<a<<" X " <<b<<" is "<<c<<endl;
    }
};
class D : public A , public B
{
    int d,e;
    public:
    void add()
    {
        d=a+b;
        cout<<"Addition of a nd b :"<<d<<endl;
    }
    void sub()
    {
        e=s-t;
        cout<<"Difference of s nd t :"<<e<<endl;
    }
};
class E : public A
{
    int f;
    public:
    void modulo()
    {
        f=a%b;
        cout<<"modulo of a nd b :"<<f;
    }
};
int main()
{
    C ob;
    ob.get1();
    ob.mul();
    D ob1;
    ob1.get1();
    ob1.get2();
    ob1.add();
    ob1.sub();
    E ob3;
    ob3.get1();
    ob3.modulo();
    
    return 0;
}
