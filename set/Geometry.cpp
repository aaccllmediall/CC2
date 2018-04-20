#include <stdio.h>
#include "Geometry.h"

using namespace std;

Point::Point(int x1, int y1)
{
    x=x1; y=y1;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(const int new_x)
{
    x=new_x;
}

void Point::setY(const int new_y)
{
    y=new_y;
}

PointArray::PointArray()
{
    size=0;
    start=new Point[0];
}

PointArray::PointArray(const Point points1[], const int size1)
{
    size=size1;
    start=new Point[size];
    for (int i=0; i<size; i++)
        start[i]=points1[i];
}

PointArray::PointArray(const PointArray &pv)
{
    size=pv.size;
    start=new Point[size];
    for (int i=0; i<size; i++)
        start[i]=pv.start[i];
}

PointArray::~PointArray()
{
    delete[] start;
}

void PointArray::resize(int n)
{
    Point *new1=new Point[n]; int aux;
    if (size<n) { aux=size;}
    else { aux=n;}
    for (int i=0; i<aux; i++){
        new1[i]=start[i];
    }
    delete[] start; size=n;
    start=new1;
}

void PointArray::push_back(const Point &p)
{
    resize(size+1);
    start[size-1]=p;
}

void PointArray::insert(const int position, const Point &p)
{
    if (position<0 || position>=size) { return ;}
    resize(size+1);
    for (int i=1; size-i>position; i++)
        start[size-i]=start[size-i-1];
    start[position]=p;
}

void PointArray::remove(const int pos)
{
    if (pos<0 || pos>=size) { return ;}
    for (int i=pos; i<=size-2 ; i++)
        start[i]=start[i+1];
    resize(size-1);
}

const int PointArray::getSize() const
{
    return size;
}

void PointArray::clear()
{
    resize(0);
}

Point *PointArray::get(const int position)
{
    if (position<0 || position>=size) { return NULL;}
    else { return start+position;}
}

const Point *PointArray::get(const int position) const
{
    if (position<0 || position>=size) { return NULL;}
    else { return start+position;}
}
