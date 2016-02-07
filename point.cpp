#include <cmath>
#include "Point.h"

Point::Point()
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point::Point(double newX, double newY, double newZ)
{
    x = newX;
    y = newY;
    z = newZ;
}


double Point::distanceTo(const Point& p) const
{
    double distanceX = x - p.getX();
    double distanceY = y - p.getY();
    double distanceZ = z - p.getZ();

    double distance = sqrt( pow(distanceX, 2) +
                            pow(distanceY, 2) +
                            pow(distanceZ, 2)   );

    return distance;
}