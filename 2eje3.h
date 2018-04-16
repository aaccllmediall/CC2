#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(int u=0, int v=0);
        int getX() const;
        int getY() const;
        void setX(const int* );
        void setY(const int* );
        virtual ~Point();

    protected:

    private:
        int x, y;
};

#endif // POINT_H
