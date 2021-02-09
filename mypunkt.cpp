#include "mypunkt.h"

MyPunkt::MyPunkt(int x, int y)
{
    mX = x;
    mY = y;
}

int MyPunkt::getX()
{
    return  mX;
}

int MyPunkt::getY()
{
    return mY;
}

void MyPunkt::setX(int x)
{
    mX = x;
}

void MyPunkt::setY(int y)
{
    mY = y;
}
