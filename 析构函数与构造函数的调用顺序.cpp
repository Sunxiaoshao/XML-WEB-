#include<iostream>
#include<stdlib.h>
using namespace std;

class Grandpa            //����Grandpa��
{
	char name[10];
	int age;
public:	Grandpa(){                  //���캯��
	cout<<"the constructor of Grandpa!\n";
	}
	~Grandpa(){                 //��������
	cout<<"the destructor of Grandpa!\n";
	}

};

class Father :  public Grandpa   //���м̳�Grandpa
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

class Son : public Father    //���м̳�Father
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
     Son *A=new Son();  //���ù��캯��
     delete A;          //����ָ�������������
     system("pause"); //�ӳ�������á�pause������

}