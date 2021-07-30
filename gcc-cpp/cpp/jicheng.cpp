#include<iostream>

#include<cstring>

using namespace std;

class LEI1
{
	public:
	int i1;

	int i2;

	int i3;

	void hs1()
	{
		printf("hs1\n");
	}

};

class LEI2
{
	public:
	float f1;

	float f2;

	float f3;

	void hs2()
	{
		cout << "hs2" << endl;
	}

};

class LEI3
{
	public:
	char c1[100];

	char c2[100];

	char c3[100];

	void hs3()
	{

		puts("hs3\n");

	}

};

class JClei: public LEI1,public LEI2,public LEI3
{
	public:

		void lei1(int a,int b)
		{
			hs1();

			i1 = a;

			i2 = b;

			i3 = i1+i1;

			cout<<i3<<endl;
		return;
		}


		void lei2(float a,float b)
		{
			hs2();

			f1 = a;

			f2 = b;

			f3 = f1*f2;

			cout<< f3 <<endl;
		return;
		};	


		void lei3()
		{
			hs3();

			strcpy(c1,"maomaoaichirou:");

			strcpy(c2,"gougouaichuirou:");

			strcpy(c3,c1);

			strcat(c3,c2);

			cout << c3 <<endl;




		return;
		};
};


int main()
{
	JClei jcleit;

	jcleit.lei1(300,200);

	jcleit.lei2(222.333,10.123);


	jcleit.lei3();




return 0;
}

