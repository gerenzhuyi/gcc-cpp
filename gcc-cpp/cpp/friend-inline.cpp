#include<iostream>

using namespace std;

class LEIM
{
	public:
		void hs(void)
		{
			int i;

			i =a+b;

			cout<<i<<endl;
		}

	friend void yyhs(LEIM leit);


	private:

		static int a = 500;

		static int b = 50;
};

void yyhs(LEIM 	leit)
{
	printf("%d\t%d\n",leit.a,leit.b);

	leit.a = 555;

	leit.b = 555;

return;
}

inline int nlhs(int a,int b)
{
	int ii ;

	ii = a+b;

return ii;
}


int main()
{
	LEIM leit;

	yyhs(leit);
	
	leit.hs();

	cout << nlhs(100,10) <<endl;
	cout << nlhs(100,20) <<endl;
	cout << nlhs(100,30) <<endl;
	cout << nlhs(100,40) <<endl;
	cout << nlhs(100,50) <<endl;	
	cout << nlhs(100,60) <<endl;



return 0;
}


