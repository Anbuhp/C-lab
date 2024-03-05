#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		a()
		{}
		A(int i)
		{
			x=i;
		}
		void operator +(A);
        void display();
};
void A::operator +(A a)
{
	int m=x+a.x;
	cout<<"the result of te addition of two object is:"<<m;
}
int main()
{
	A a1(5);
	A a2(4);
	a1+a2;
	return 0;
}
