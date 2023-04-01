#include <iostream>
using namespace std;


class overload
{
	private:
	int res;

	public:
	overload(int x,int y)
	{
		res=x*y;


	}

	overload(int x,int y, int z)
	{
		res=x+y+z;
	}

	int result()
	{
		return res;
	}
};

int main() 
{
	overload o1(20,4);
	overload o2(50,65,30);

	cout<<"result of multiplication is : "<< o1.result()<<endl;
	cout<<"result of addition is : "<<o2.result()<<endl;

	return 0;
}
