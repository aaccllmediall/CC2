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
    void doubleVal()
    {
        x*=2;
        y*=2;
    }
};

int main()
{
    const Point myPoint(5, 3);          // Los objetos const solo tendrá funciones
    //Point myPoint(5, 3);              // miembro const contas cuales funcionara
    myPoint.doubleVal();                // perfectamente
    cout << myPoint.getX() << " " << myPoint.getY() << "\0";
    return 0;
}
