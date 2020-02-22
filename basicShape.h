//
//  BasicShape.h
//  Assignment5
//

#ifndef BasicShape_h
#define BasicShape_h

#include <iostream>
#include <string>
using namespace std;

class BasicShape
{
protected:
    double area;
public:
    //Default constructor
    BasicShape(){ area = 0; }

    double getArea() { return area; }
    virtual void calcArea() = 0;
};
#endif /* BasicShape_h */
