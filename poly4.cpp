#include<iostream>
using namespace std;

class base
{
	public:
	virtual void print()
	{
		cout<<"this is the function of base class"<<endl;
	}
};

class derived : public base
{
	public:

	void print()
	{
		cout<<"this  is the function of derived class";
	}
};

int main()
{
	base* b;
	derived d;
	b= &d;
	b->print();
	return 0;

}