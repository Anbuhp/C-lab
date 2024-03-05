#include <iostream.h>
#include<conio.h>
template<class T>
class number {
private:
    T num;
public:
    number(T n) : num(n) {}
    T getnum() {
	return num;
    }
};

int main() {
    clrscr();

    number<int> numberint(7);
    number<double> numberdouble(7.7);
    cout << "int number = " << numberint.getnum() << endl;
    cout << "double number = " << numberdouble.getnum() << endl;
    getch();
    return 0;
}
