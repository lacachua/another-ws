#include <iostream>
#include "Point.h"
using namespace std;
 
int main(){
    Point p1;
    Point p2(2, 3);
    Point p3(p2);
   /* p1.show(); // 1 1
    p2.show(); // 2 3
    p3.show(); // 2 3
    */
    Point *p = new Point(4, 5);
    p->show(); // 4 5
    delete p;
    return 0;
}