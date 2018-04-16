#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    const Point *p=new Point();
    cout << p->getX() << " " << p->getY() << endl;
    const int x=10; const int y=6;
    p->setX(&x); p->setY(&y);
    cout << p->getX() << " " << p->getY() << endl;
    /*const int p=4;
    const int *ptr=&p;
    cout << *ptr << endl;
    int x=*ptr;
    cout << x << endl;*/
    return 0;
}
