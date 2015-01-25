class Point//基础对象类
{
public:
    Point(int xVal = 0, int yVal = 0):x(xVal),y(yVal) { }
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int xVal) { x = xVal; }
    void setY(int yVal) { y = yVal; }

public:
    virtual Point* clone() const { //虚函数，为了实现让句柄类在不知道对象的确切类型的情况下分配已知对象的新副本
    return new Point(*this);
 }
 
private:
    int x,y;
};
