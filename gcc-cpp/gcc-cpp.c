
#include <stdio.h>

int // 整数

float // 单浮点

double // 双浮点

char // 字符

void // 无类型

bool // 布尔

enum {，，，，，} //  枚举 给第一个赋值依次加一

const 类型 名字 赋值 //  转为常量

= // 赋值

a != b // 不等于


a == b  // 等于

>= // 大于等于

<= // 小于等于


> // 大于

< // 小于

a && b // 与 两个 为真 输出 真

!a // 非 取反


a || a  // 或 两个一个为真 输出为真

a & b  //二进制 与 

a | b // 二进制 或

～a // 取反

a ^ b  //二进制异或 先与 再 取反

a << // 左移 

a >> // 右移


a <<= // 左移后等于



a >>= // 右移后等于


a  b  ? x：y // 判断前面的 为真 输出 x  为假 输出 y 



a % b  // 取模 


类型 a (,,){}; //函数 return 返回变量;  调用 a ( 要赋值的变量,,）

类型 a []{，，，，}; // 数组[数字] 名字[] 加数字访问

if(){} // 判断

else{}	// if 为假执行

switch() {} //多分支常量判断 从相同的case开始break结束

case : // 用：分开 case a: 

break // switch--while 停止

continue; // 立即停止并进行下次循环

goto // 标记跳转 goto 名字; 跳到名字处 goto a;  a:

while(){}; // 判断循环

do{} while (); // 先循环

for(;;){} // 一体循环（ 变述的语句量;判断;操作）


main （）{} // 主函数

return 0;

printf (); /* 输出控制付
	      %d 输出整数  %f 输出浮点 %c 输出字符  %u 输出无符号型 

	      %s 输出字符串  %o 输出八进制  %x 输出十六进制

	      %md %.mf  制定长度

	     \a 报警声   \d 退格   \n 换行  \r 回车付== 从第一行显示
	  
	     \f 换页  \t 水平制表== 加几个空格   \v 垂直制表== 在结束的下行显示 


*/
类型*a; //指针 & 取地址 *a 取地址内值 **a 指针的指针 NULL 赋值空

类型*a[]={,,,}; //指针数组 

类型*a  b[]  a=b ;  // 指向 数组的指针

ab(类型*a,*b) &a  &b // 指针传递数据 给函数

类型 *ab(a,b) {c[] return c[] }  *a  a=ab; // 函数返回指针 必须是数组返回 
// 让指针等于指针 必须为静太内存


cout << endl // c++ 屏幕显示





