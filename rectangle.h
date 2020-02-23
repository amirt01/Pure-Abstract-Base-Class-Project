/*
  CIS 22B
    Lab5 - Rectangle: This class inherits from the Basic Shape
    class and constructs a rectangle that returns the area of the
    rectangle as well as it's width and length.
  Author: Amir Tadros, Anh Hoang Mai Le, Arvind Kumar, Timothy Hyatt
  Date: February 22, 2020
*/

#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "basicShape.h"

class Rectangle : public BasicShape {
private:
    long int width;
    long int length;
public:
    // Default constructor
    Rectangle(long int w, long int l){
        width = w;
        length = l;
        calcArea();
    }

    // Get the width of the rectangle
    long int getWidth(){return (width);}

    // Get the length of the rectangle
    long int getLength(){return (length);}

    // Set the area of the rectangle
    void calcArea()
    {
        area = width * length;
    }
};

#endif // RECTANGLE_H_INCLUDED
