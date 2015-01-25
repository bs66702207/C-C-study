#include<iostream>
using namespace std;
class circle
{
public:

    static const double pi = 3.1415926;
    double r;
    double area;
    double getS()
    {
        return pi*r*r;
    }
};

int main()
{
    circle c;
    cout<<"请输入半径"<<endl;
    cin >> c.r;
    c.area = c.getS();
    cout<<"面积为:";                                                                                
    cout<< c.area << endl;

}
