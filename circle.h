//
//  Circle.h
//  Assignment5
//

#ifndef Circle_h
#define Circle_h

class Circle: public BasicShape
{
private:
    long centerX;
    long centerY;
    double radius;

public:
    Circle() { centerX = centerY = 0; radius = 0;}
    Circle(long x, long y, double r)
    {
        centerX = x;
        centerY = y;
        radius = r;
    }

    void setCenterX(long x) { centerX = x; }
    long getCenterX(){ return centerX; }

    void setCenterY(long y) { centerY = y;}
    long getCenterY(){ return centerY; }

    void calcArea() { area = 3.14159 * radius * radius; }
};

#endif /* Circle_h */
