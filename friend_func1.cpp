#include<iostream>
using namespace std;

class salary
{
	private:
	int sal;

	friend int increament(salary s);
};

int increament(salary s)
{
	s.sal=s.sal+7000;
	return s.sal;
}




int main()
{
	salary s;
	cout<<"increament is : ";
	cout<<increament(s);
	return 0;
}