/*
  CIS 22B
    Lab5 - Rectangle: This class inherits from the Basic Shape
    class and constructs a rectangle that returns the area of the
    rectangle as well as it's width and length.
  Author: Amir Tadros, Anh Hoang Mai Le, Arvind Kumar, Timothy Hyatt
  Date: February 23, 2020
*/
#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    double radius;
    long CenterX, CenterY;

    cout<<"Enter your circle's center's x-coordinate (long): ";
    cin>>CenterX;
    cout<<"Enter your circle's center's y-coordinate (long): ";
    cin>>CenterY;
    cout<<"Enter your circle's radius (double): ";
    cin>>radius;
    Circle mycircle(CenterX, CenterY, radius);
    mycircle.calcArea();

    cout<<"A circle with center ("<<mycircle.getCenterX()<<","<<mycircle.getCenterY()
        <<") and radius = "<<mycircle.getRadius()<<" has an area = "<<mycircle.getArea()<<endl;

    long width, length;
    cout<<"Enter your rectangle's width (integer): ";
    cin>>width;
    cout<<"Enter your rectangle's length (integer): ";
    cin>>length;
    Rectangle myrectangle(width, length);
    myrectangle.calcArea();

    cout<<"A rectangle with size "<<myrectangle.getWidth()<<"x"<<myrectangle.getLength()
    <<" has an area = "<<myrectangle.getArea()<<endl;
    return 0;
}

/*
Sample output:

Enter your circle's center's x-coordinate (long): 2
Enter your circle's center's y-coordinate (long): 4
Enter your circle's radius (double): 3.5
A circle with center (2,4) and radius = 3.5 has an area = 38.4845
Enter your rectangle's width (integer): 5
Enter your rectangle's length (integer): 14
A rectangle with size 5x14 has an area = 70

*/
