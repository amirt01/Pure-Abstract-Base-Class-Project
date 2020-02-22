#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class rectangle {
private:
    long int width;
    long int length;
public:
    rectangle(long int w, long int l){
        width = w;
        length = l;
    }
    long int getWidth(){return (width);}
    long int getLength(){return (length);}
    long int calcArea(){return (width * length);}
};

#endif // RECTANGLE_H_INCLUDED
