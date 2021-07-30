#include<iostream>
using namespace std;

class A
{
	public:

		A* operator->()
		{
			cout<<"A重载-》"<<endl;

			return this;
		}

	void hs()
	{
		cout<<"函数调用"<<endl;
	}

};

int main()
{
	A a;

	a -> hs();


return 0;
}
