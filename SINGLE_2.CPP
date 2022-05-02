//program to demonstrate single inheritance.
#include<iostream.h>
#include<conio.h>
class stud
{
  private:
	 int no;
	 char name[30];
  public:
       void get();
       void put();
};
class price:public stud
{
 private:

 int p1,p2,total;
 public:
       void getp();
       void show();
       void add();

};
void stud::get()
{
	cout<<"enter product number-->"<<endl;
	cin>>no;
	cout<<"enter product name-->"<<endl;
	cin>>name;
}
void price::getp()
{
	cout<<"enter price-->"<<endl;
	cin>>p1;
	cout<<"enter gst-->"<<endl;
	cin>>p2;

}
void stud::put()
{
	cout<<"product number is-->"<<no<<endl;
	cout<<"product name is-->"<<name<<endl;

}
void price::show()
{
	cout<<"main price is-->"<<p1<<endl;
	cout<<"gst is-->"<<p2<<endl;
	cout<<"total price is -->"<<total<<endl;
}
void price::add()
{
	total=p1+p2;
}
void main()
{

	clrscr();
	price s1;
	s1.get();

	s1.getp();
	s1.put();
	s1.add();
	s1.show();
	getch();
}















