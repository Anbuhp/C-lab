// 2.Constructor & Destructor

  
#include <iostream>  
class Employee  
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
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;  
}


Output:
Constructor Invoked  Constructor Invoked
Destructor Invoked   Destructor Invoked


