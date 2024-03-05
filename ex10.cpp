#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char string[100];
	ofstream fout;
	fout.open("d:\\ fil.text",ios::out);
	if (!fout)
	{
		cerr<<"error in creating file !";
	
		return 0;
	}
	cout<<"enter yor message:";
	cin.getline(string,100);
	fout<<string;
	fout.close();
	ifstream fin;
	char c[100];
	fin.open("d:\\ fil.text",ios::in);
	if(!fin)
	{
		cerr<<"error in opening file !";
		return 0;
	}
	while (! fin.eof())
	{
		cout<<"now reading your message:";
		fin.getline(c,100);
		cout<<c;
		
	}
}
