#include <iostream>
#include <stdio.h>
#include "Geometry.h"

using namespace std;

int main()
{
    Point g;        // porque es invalido Point g();
    cout << g.getX() << " " << g.getY() << endl;
    g.setX(9); g.setY(14);
    cout << g.getX() << " " << g.getY() << endl;
    Point y(1,1); Point x(2,5); Point z(7, 9); int t=3;
    Point h[t]={y, x, z};
    cout << h[1].getX() << endl;
    PointArray m(h, t); Point u(3, 3);
    cout << m.getSize() << endl;
    m.push_back(u); cout << m.getSize() << endl;

    return 0;
}
