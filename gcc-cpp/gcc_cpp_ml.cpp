// 宏定义-------------------------------------------------------------/

#include<>
#define a 100
#undef a
#ifdef a
#ifndef a
#if()
#elif()
#else
#endif
// 头文件--------------------------------------------------------------//

stdio.h
stdarg.h

// 变量类型----------------------------------------------------------//

signed
unsigned

int a=100;
float a=100.111;
double a=100.123;
char a =a';
const int a=100;
auto int a=100;
static int a=100;
extern int a=100;
void a;
bool a;
struct a {
int a;
float b;
double c;
};

struct a a;

union a {

} a;

typedef int a a;

FILE *a;

va_list a;

EOF

sizeof():

enum a{}:

// 判断指令-----------------------------------------------//

if(){};

else{};

switch(a){
case 1:
};

break;

// 循环指令-------------------------------------------------------///

while (){};
for (;;){};

continue;

goto a;

a:

// 函数定义-----------------------------------------------------//

void a(int a,int b )  {  };

void a (int *a,int *b) {  }; -- void a (&a,&b);

int *a (int a,int b) { }; 

int (*a) (int a,int b); -- a() = &a();

void a (int vasl,...) {

	va_list va;

	va_start(va,vasl);

	va_arg(va,int);
	
	va_end(va);
};

// 数组定义-----------------------------------------------------//

int a[3] = {,,};

int a[3][3][3] = {{,,},{,,},{,,}};

int a(a[],b);

int *a (a,b) { return a[];  };

int *a int a[];  a = a -- a++

// 输入和输出==============================================//

char a = getchar();

gets(char a[]);

scanf("",&a):

puthar(char a);

puts(char a[]);

printf("",);

// 文件读取和写入---------------------------------------------------------


 FILE wj;

 wj = fopen("","");

   char a =  fgetc(wj);
    
    fgets(char a,int,wj);
   
    fscanf(wj,"", &a);

     fputc(char a,wj);
    
     fputs(char a,wj);

   fprintf(wj,"",char a);I

   fclose(wj);

// 输出输入控制符======================================================//

%d 整数   %f 浮点   %c 字符  %s 字符串  %lf 浮点   %p 指针  %x 无符号位十六进制整数   %u 无符号位八进制整数   %n 整数串  %o 无符号位十进制整数  %a    %e/E   %i %g/G

\a   \d   \r  \f  \t \n  \v   \\ \?  \' \""

// 运算符===================================================//

=  +   -   *    /   ==   !=  +=  ++  ||  &&   !   <  >  <=  >=

%  &   ^  ~   |      () ? a : b   <<   >>  

//-内存管理---------------------------------------------------------/

#include<stdlib.h>

 *P =(lx) calloc(int,lx)
  *p =(lx) malloc()
  *p= (lx) realloc(*p,int);
  free(*P);

///可变参数函数 --------------------------------------------

#include<stdarg.h>

int hanshuti(类型 ,...)
{
	va_list liebiao;
	va_srt(liebiao,shuliang);
	va_arg(liebiao,类型);
	va_end(liebiao);

}
// 字符串=========================================================
#include<stding.h>


strcpy(1w,2w);

strcat(1w,2w);

strcmp(1w,2w);

strchr(1w,2w);
strstr(1w,2w);

//==============================================================

//a.cpp==========================================================




//cpp 输出-输入-===============================================

cerr

colg

cout

<<

cin >>

//cpp 文件操作=================================

fstream

ofstream

ifstream

a.open

a.close

ios::app

ios::ate

ios::out

ios::in

ios::trunc

//app类 ==============================================================

class

private:

protected:

public:

friend

virtual

operator

inline

// cpp 异常处理=========================================================
//


try {};

throw ;

catch

//模板=============================================================================


template <>

typename



//
//
