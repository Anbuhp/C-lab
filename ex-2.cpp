// 2.Constructor & Destructor

  
#include<iostream>
using namespace std;

class Employee
{
    public:
    Employee()
    {
        cout<<"Constructor Invoked"<<endl;
        }
        ~Employee()
        {
            cout<<"Destructor Invoked"<<endl;
        }
};
int main(void)
{
    Employee e1; 
    return 0;
}


Output:
Constructor Invoked
Destructor Invoked 


