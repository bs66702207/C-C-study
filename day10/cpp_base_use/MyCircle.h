#pragma once
#include "MyPoint.h"
class MyCircle
{
public:
	void setCir(double x, double y, double r);
	
public:
	char * judge(double x, double y);
	char * judge(MyPoint &p);

private:
	double x1, y1; //圆心坐标
	double r1;  //圆半径
};
