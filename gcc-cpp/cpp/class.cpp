#include<iostream>
#include <cstring>
using namespace std;

class leim
{
	public:

	int gy_i;

	double gy_d;

	char gy_c[100];

	int gy_hs(int a,int b)
	{
		int fh;

		fh = a + b;

	return fh;
	}

	void sm_hs(void);

	void sy_hs()
	{
		cout << syhsc << endl;
	}
	
	private:

	char syhsc[100] = "syhs";
};

 void leim::sm_hs(void)
        {
                printf("smhs\n");

        }


int main()
{	
	int ii;

	leim lei1;
	
	lei1.gy_i =321;

	lei1.gy_d =123.321;

	strcpy(lei1.gy_c,"gyhd");

	ii = lei1.gy_hs(100,200);

	lei1.sy_hs();


	lei1.sm_hs();


	cout<<lei1.gy_i<<endl;

	cout<<lei1.gy_d<<endl;


	cout<<lei1.gy_c<<endl;



return 0;
}


