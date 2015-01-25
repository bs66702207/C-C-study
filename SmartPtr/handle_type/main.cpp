#include <iostream>
#include "Point.h"
#include "D3Point.h"
#include "SmartPtr.h"

int main()
{
      Point *p1 = new Point(10, 8);
      SmartPtr sp1(p1);
      SmartPtr sp2(sp1);
      D3Point *p2 = new D3Point(5, 5, 0);
      SmartPtr sp3(p2);

      return 0;
}
