/*
  CIS 22B
    Lab5 - Circle: This class inherits from the Basic Shape
    class and constructs a class which calculates the area of
    a circle.
  Author: Amir Tadros, Anh Hoang Mai Le, Arvind Kumar, Timothy Hyatt
  Date: February 22, 2020
*/

#ifndef Circle_h
#define Circle_h
# define M_PI           3.14159265358979323846  /* pi */

class Circle: public BasicShape
{
private:
    long centerX;
    long centerY;
    double radius;

public:
    // Default constructor
    Circle() { centerX = centerY = 0; radius = 0;}

    // Constructor with arguments
    Circle(long x, long y, double r)
    {
        centerX = x;
        centerY = y;
        radius = r;
        calcArea();
    }

    // Get center x axis
    long getCenterX(){ return centerX; }

    // Get center x axis
    long getCenterY(){ return centerY; }

    // Calculate the area using M_PI
    void calcArea()
    {
        area = M_PI * radius * radius;
    }
};

#endif /* Circle_h */
