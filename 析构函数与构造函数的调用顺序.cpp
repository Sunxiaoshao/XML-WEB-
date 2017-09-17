#include<iostream>
#include<stdlib.h>
using namespace std;

class Grandpa            //声明Grandpa类
{
	char name[10];
	int age;
public:	Grandpa(){                  //构造函数
	cout<<"the constructor of Grandpa!\n";
	}
	~Grandpa(){                 //析构函数
	cout<<"the destructor of Grandpa!\n";
	}

};

class Father :  public Grandpa   //公有继承Grandpa
{
	char work;
public:
	Father(){
	cout<<"the constructor of Father!\n";
	}
	~Father(){
	cout<<"the destructor of Father!\n";
	}
};

class Son : public Father    //公有继承Father
{
	char schoolname;
public:
	Son(){
	cout<<"the constructor of son!\n";
	}
	~Son(){
	cout<<"tthe destructor of son!\n";
	}
};


void main()
{
     Son *A=new Son();  //调用构造函数
     delete A;          //销毁指针调用析构函数
     system("pause"); //从程序里调用“pause”命令

}