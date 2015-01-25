/**为了避免上面方案中每个使用指针的类自己去控制引用计数，
可以用一个类把指针封装起来。封装好后，这个类对象可以出现在用户类使用指针的任何地方，
表现为一个指针的行为。我们可以像指针一样使用它，而不用担心普通成员指针所带来的问题，
我们把这样的类叫句柄类。在封装句柄类时，需要申请一个动态分配的引用计数空间，指针与引用计数分开存储。
*/

class D3Point : public Point//派生类
{
public:
    D3Point(int xVal, int yVal, int zVal):Point(xVal, yVal), z(zVal) { }
    int getZ() const { return z; }
    void setZ(int zVal) { z = zVal; }

public:
    D3Point* clone() const//虚函数，为了实现让句柄类在不知道对象的确切类型的情况下分配已知对象的新副本
	{	
		return new D3Point(*this);
	}

private:
     int z;
};
