// 3.Exception Handling

#include <iostream>

using namespace std;

int display(int x, int y)
{
   if (y == 0) 
   {
      throw "Division by zero condition!";
   }
   return (x / y);
}

int main()
{
   int a = 50;
   int b = 0;
   int c = 0;
   try 
   {
      c = display(a, b);
      cout << c << endl;
   } 
   catch (const char* msg)
   {
      cout << msg << endl;
   }
   return 0;
}

Output
Division by zero condition!
