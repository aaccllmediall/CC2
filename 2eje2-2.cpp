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
    void setX(int newX) const { this->x=newX;}
    //void setX(int newX) { this->x=newX;}
};                                      // las funciones const solo son
                                        // de lectura, no son modificables
int main()
{
    Point p(5, 3);
    p.setX(9001);
    cout << p.getX() << ' ' << p.getY();
    return 0;
}

