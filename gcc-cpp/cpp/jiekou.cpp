#include<iostream>

#include<cstring>

using namespace std;

class A
{

	protected:

		int i= 0;

		float f =0;

		double d =0;

		char c[500];

		void xshs()
		{
			cout<<"i的值:"<<this->i<<"\nf的值:"<<this->f<<"\nd的值:"<<this->d<<"\nc的值:"<<this->c<<endl;
		
		};



		void fzhs()
		{
			strcat(c,"猫猫爱吃鱼");

			i = 10;

			f = 333.333;

			d = 0;
		
		}


	public:

		virtual void jkhs()=0;




};

class JK1: public A
{
	public:
		void jkhs(){

			this->fzhs();

			this->xshs();

			this->d = (this->f * this->i);
			
			strcpy(this->c,"乘法：");
			
			cout<<this->c<<this->d<<endl;

			return;

	
		}


};

class JK2: public A
{
	public:

	void jkhs()
	{

		this->fzhs();

		this->xshs();
  
		strcpy(this->c,"加法:");

		this->d = (this->f + this->i);

		cout<<this->c<<this->d<<endl;

		return;

	}

};


int main()
{

	JK1 a;

	JK2 b;

	a.jkhs();

	b.jkhs();


return 0;
}
