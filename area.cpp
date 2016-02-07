#include <cmath>
#include "Point.h"


double computeArea(const Point& a, const Point& b, const Point& c)
{
    double area;

    double x = a.distanceTo(b);
    double y = b.distanceTo(c);
    double z = c.distanceTo(a);

    double s = (x + y + z)/2;

    area = sqrt ( s * (s - x) * (s - y) * (s - z));

    return area;

}