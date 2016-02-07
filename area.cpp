#include <cmath>
#include "Point.h"


double computeArea(const Point& a, const Point& b, const Point& c)
{
    double area;

    // computing distances for semiperimeter formula
    double x = a.distanceTo(b);
    double y = b.distanceTo(c);
    double z = c.distanceTo(a);

    // calculation for semiperimeter
    double s = (x + y + z)/2;

    //Heron's formula to calculate area of a triangle
    area = sqrt ( s * (s - x) * (s - y) * (s - z));

    return area;

}