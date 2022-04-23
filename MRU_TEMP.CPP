//program to demonstrate function template for finding maximum number between 2 number.
#include<iostream.h>
#include<conio.h>
template<class T>
T max(T a,T b)
{
	if(a>b)
		return a;
	else
		return b;

}
void main()
{
	clrscr();
	char ch1,ch2,ch3;
	cout<<"\n enter two characters->";
	cin>>ch1>>ch2;
	cout<<"\n.....................................\n";
	cout<<"\n maximum character is->";

	ch3=max(ch1,ch2);
	cout<<"\nch3:\t"<<ch3;
	int a,b,c;
	cout<<"\n enter two integers->";
	cin>>a>>b;
	cout<<"\n.....................................\n";
	cout<<"\n maximum integer is->";

	c=max(a,b);
	cout<<"\nCh:\t"<<c;


	getch();
}