//virtual function
#include<iostream.h>
#include<conio.h>
class base
{
      public:
	     virtual void show();
};
class derived
{
	public:
		void show();

};
void base::show()
{
	cout<<"base class"<<endl;
}
void derived::show()
{
	cout<<"derived class"<<endl;
}
void main()
{
	clrscr();
		base *ptr;
		  base b;
		  derived d;

		  ptr=&b;
		  ptr->show();

	      //	  ptr=&d;
		//  ptr->show();
		d.show();

	getch();

}





