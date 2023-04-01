#include <iostream>
using namespace std;

class Bar
{
	private:
	int drink;
	int people;

	public:
	Bar(int d,int p)
	{
		drink=d;
		people=p;
	}

	int total_cash()
	{
		return drink*people;
	}

};



int main()
{
	Bar b(40,35);
	cout<<"Total cash collected : "<<b.total_cash()<<endl;
	return 0;
} 

