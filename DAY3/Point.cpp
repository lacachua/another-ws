// Định nghĩa lớp
#include <iostream>
#include "Point.h"
using namespace std;

void Point::TT(int x)
{
    this->xVal += x;
    this->yVal += x;
}

void Point::show()
{
    cout << this->xVal << ", " << this->yVal << endl;
}

Point::Point()
{
    this->xVal = 1;
    this->yVal = 1;
}

Point::Point(const Point& p)
{
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point::Point(const int& xVal, const int& y)
{
    this->xVal = xVal;
    this->yVal = y;
}

Point::~Point()
{
    cout << "Huy Point: " << this->xVal << ", " << this->yVal << endl;
}
