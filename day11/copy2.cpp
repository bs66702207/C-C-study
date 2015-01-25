#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
using namespace std;

class name
{ 
public :
	name(char *pn) ;  
	name( name &obj)
	{
		cout <<" copy Constructing " << endl ;
		char *pn = obj.getPn();
		pname = (char *)malloc(strlen(pn) +1);
		if (pname!=NULL) strcpy(pname,pn) ;
		//pname = new char[strlen(pn)+1] ;
		//if (pname!=0) strcpy(pname,pn) ;
		size = strlen(pn) ;
	}
	~ name() ;
protected : 
	char *pname ;       int size ;
public:
	char * getPn()
	{
		return pname;
	}	
	void operator=(name &obj1)
	{
		cout <<" 执行=操作" << endl ;
		if(pname != NULL)
		{
			free(pname);
			pname = NULL;
			size = 0;
		}
		char *pn = obj1.getPn();
		pname = (char *)malloc(strlen(pn) +1);
		if (pname!=NULL) strcpy(pname,pn) ;
		//pname = new char[strlen(pn)+1] ;
		//if (pname!=0) strcpy(pname,pn) ;
		pname[0] = 'm';
		size = strlen(pn) ;
	}

} ;
name::name(char *pn)
{ 
	cout <<" Constructing " << pn << endl ;
	pname = (char *)malloc(strlen(pn) +1);
	if (pname!=0) strcpy(pname,pn) ;
	//pname = new char[strlen(pn)+1] ;
	//if (pname!=0) strcpy(pname,pn) ;
	size = strlen(pn) ;
} 
name :: ~ name()
{ 
	cout << " Destructing " << pname << endl ; 
	pname[0] = '\0' ;
	//delete  []pname ;
	free(pname);
	size = 0 ;
}


void playmain()
{
	char *buf = "name1";
	char *buf3 = "name3";
	name obj1(buf);
	name obj3(buf3);
	//如果你不写copy构造函数，那么C++编译器会给我们提供一个默认的copy构造函数 （浅cpy）
	name obj2 = obj1;

	//如果你不写=操作，那么C++编译器会给我们提供一个=操作函数 （浅cpy）
//	obj2 = obj1;
	obj2 = obj3;//如果没有=操作函数，会出现bug，原因发生两次析构，程序崩溃
	cout<<"obj1.getPn"<<obj1.getPn()<<endl;
	cout<<"obj2.getPn"<<obj2.getPn()<<endl;
}

int main()
{
	playmain();
	return 0;
}
