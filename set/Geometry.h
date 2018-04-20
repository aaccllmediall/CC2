#ifndef GEOMETRY_H
#define GEOMETRY_H

using namespace std;

class Point
{
    public:
        Point(int x1=0, int y1=0);
        int getX() const;
        int getY() const;
        void setX(const int );
        void setY(const int );

    protected:

    private:
        int x, y;
};

class PointArray
{
    public:
        PointArray();
        PointArray(const Point [], const int );
        PointArray(const PointArray &);
        ~PointArray();
        void push_back(const Point &);
        void insert(const int , const Point &);
        void remove(const int );
        const int getSize() const;
        void clear();
        Point *get(const int );
        const Point *get(const int ) const;
        // una de las funciones *get es modificable,
        // el otro solo es para solo lectura

    private:
        Point *start;
        int size;
        void resize(int );
};

class Polygon
{
    protected:
        PointArray keep1;
        static int keep2;
};

#endif // GEOMETRY_H
