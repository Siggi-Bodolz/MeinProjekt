#ifndef MYPUNKT_H
#define MYPUNKT_H


class MyPunkt
{
public:
    MyPunkt(int x, int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
private:
    int mX;
    int mY;
};

#endif // MYPUNKT_H
