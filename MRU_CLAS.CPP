//program to demonstrate class template.
#include<iostream.h>
#include<conio.h>
template<class T1,class T2>
class test
{
	test(T1 a,T2 b)//constructor
	{
	cout<<a<<"\t"<<b;
	}
	void swap(T1 x,T2 y)
	{
	T1 t;
	t=x;
	x=y;
	y=t;
	cout<<"\nx:"<<x<<"\t y:"<<y;

	}
};
void main()
{
	clrscr();
	int p,q;
	cout<<"\n enter two integer for swap x & y->\n";
	cin>>p>>q;
	cout<<"\n before swap x & y is->\n";

	test<int,int>test1(p,q);
	cout<<"\n after swap x & y->\n;
	test1.swap(p,q);

	char a,b;
	cout<<"\n enter two characters for swap x & y->\n";
	cin>>a>>b;
	cout<<"\nbefore swap x & y->\n";
	test<char,char>test2(a,b);
	cout<<"\n after swap x & y=>\n";
	test2.swap(a,b);
	getch();
}