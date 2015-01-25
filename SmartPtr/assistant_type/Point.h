class Point	//基础对象类
{
public:
     Point(int xVal = 0, int yVal = 0):x(xVal),y(yVal) { }
     int getX() const { return x; }
     int getY() const { return y; }
     void setX(int xVal) { x = xVal; }
     void setY(int yVal) { y = yVal; }
 
private:
     int x,y;
};
