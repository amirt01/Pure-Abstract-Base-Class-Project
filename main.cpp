#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Circle mycircle(1,2,3);
    Rectangle myrectangle(2, 7);
    mycircle.calcArea();
    myrectangle.calcArea();
    cout<<"A circle with center ("<<mycircle.getCenterX()<<","<<mycircle.getCenterY()
    <<") and radius = 3 has an area = "<<mycircle.getArea()<<endl;
    cout<<"A rectangle with size "<<myrectangle.getWidth()<<"x"<<myrectangle.getLength()
    <<" has an area = "<<myrectangle.getArea()<<endl;
    return 0;
}
