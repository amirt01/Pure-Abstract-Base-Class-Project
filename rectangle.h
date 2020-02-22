#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle : public BasicShape {
private:
    long int width;
    long int length;
public:
    Rectangle(long int w, long int l){
        width = w;
        length = l;
        calcArea();
    }
    long int getWidth(){return (width);}
    long int getLength(){return (length);}
    void calcArea(){area = width * length;}
};

#endif // RECTANGLE_H_INCLUDED
