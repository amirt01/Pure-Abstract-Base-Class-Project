/*
  CIS 22B
    Lab5 - Main driver: This main driver programs test the Circle.h and Rectangle.h header files
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

    cout<<"A circle with center ("<<mycircle.getCenterX()<<","<<mycircle.getCenterY()
        <<") and radius = "<<mycircle.getRadius()<<" has an area = "<<mycircle.getArea()<<endl;

    long int width, length;
    cout<<"Enter your rectangle's width (long integer): ";
    cin>>width;
    cout<<"Enter your rectangle's length (long integer): ";
    cin>>length;
    Rectangle myrectangle(width, length);

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
Enter your rectangle's width (long integer): 5
Enter your rectangle's length (long integer): 14
A rectangle with size 5x14 has an area = 70
*/
