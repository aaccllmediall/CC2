#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int u, int v) : x(u), y(v) {}
    int getX() { return x;}
    int getY() { return y;}
    //~Point() { ;}
};                                       // falta liberar la memoria despues de
                                        // hacer uso del new
int main()                          
{
    Point *p=new Point(5, 3);
    cout << p->getX() << ' ' << p->getY();
    //delete p;
    return 0;
}