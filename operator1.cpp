#include<iostream>
using namespace std;


class Increase
{
	private:
	int value;


	public:
	Increase()
	{
		value=10;
	}

	void operator ++()
	{
		value=value+5;
	}


	void Display()
	{
		cout<<"value is : "<<value<<endl;
	}
};

int main()
{
	Increase Inc;
	++Inc;
	Inc.Display();
	return 0;
} 
