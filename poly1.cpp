#include<iostream>
using namespace std;

class king
{
	public:

	void pro(int a,int b)
	{
		cout<<a*b<<endl;
	}

	void pro(int a, int b, int c, int d, int e)
	{
		cout<<(a+b+c+d+e);
	}
};

int main()
{
	king k;
	k.pro(10, 20);
	k.pro(34,45,23,22,55);
	return 0;
}