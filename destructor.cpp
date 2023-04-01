#include<iostream>
using namespace std;

class formula1
{
	private:
	int speed;
	int pickup;


	public:
	formula1(int s,int p)
	{
		cout<<"this is a constructor"<<endl;
		speed=s;
		pickup=p;
	}


	void display()
	{
		cout<<"speed is : "<<speed<<endl;
		cout<<"pickup is : "<<pickup<<endl;
	}

	~formula1()
	{
		cout<<"this is a destructor";
	}


};



int main()
{
	formula1 f(370,4);
	f.display();
	return 0;
}
