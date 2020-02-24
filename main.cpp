#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Circle mycircle(1,2,3);
    Rectangle myrectangle(2, 7);

    cout<<"A circle with center ("<<mycircle.getCenterX()<<","<<mycircle.getCenterY()
        <<") and radius = 3 has an area = "<<mycircle.getArea()<<endl;
    cout<<"A rectangle with size "<<myrectangle.getWidth()<<"x"<<myrectangle.getLength()
        <<" has an area = "<<myrectangle.getArea()<<endl;

    return 0;
}
