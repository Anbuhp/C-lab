#include<iostream.h>
#include<conio.h>
class one
{
int r,h;
double cylvol,sphvol,recvol;
public:
double volume(int);
double volume(float,int);
long volume(long,int,int);
};
double one::volume(int r)
{
sphvol=3.14*r*r*r;
cout<<"volume of cube:\t"<<sphvol<<endl;
return 0;
}
double one::volume(float r,int h)
{
cylvol=3.14*r*r*h;
cout<<"volume of cylinder:\t"<<cylvol<<endl;
return 0;
}
long one::volume(long l,int b,int h)
{
recvol=l*b*h;
cout<<"volume of rectangle:\t"<<recvol;
return 0;
}
void main()
{
clrscr();
one ob;
ob.volume(3);
ob.volume(2.5,5);
ob.volume(100,75,15);
getch();
}
