/*
  CIS 22B
    Lab5 - Main driver: This main.cpp program tests calculating areas of rectanlges and circles
  Author: Anh Hoang Mai Le
  Other members of the group: Amir Tadros, Arvind Kumar, Timothy Hyatt
  Date: February 23, 2020
*/
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{



    double radius;
    long width;
    long length;

    cout << "What radius would you like to have? ";
    cin >> radius;
    Circle mycircle(1,2,radius);

    cout << "What length would you like to have? ";
    cin >> length;
    cout << "What width would you like to have? ";
    cin >> width;
    Rectangle myrectangle(width, length);

    cout<<"A circle with center ("<<mycircle.getCenterX()<<","<<mycircle.getCenterY()
        <<") and radius = " << radius << " has an area = "<<mycircle.getArea()<<endl;
    cout<<"A rectangle with size "<<myrectangle.getWidth()<<"x"<<myrectangle.getLength()
        <<" has an area = "<<myrectangle.getArea()<<endl;

    return 0;
}
