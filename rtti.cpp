//RTTI C++
//create base class shape virtual destructor
//deprive two class shape : circle & rectangle
//main function shape* dynamically circle object
//dynamic_cast shape both*circle & rectangle 

#include <iostream>
#include <typeinfo>

using namespace std;

class Shape {
    public:
        virtual ~Shape() {}
};

class Circle : public Shape {};
class Rectangle : public Shape {};

void indentifyShape(Shape* shape) {
    cout << "The actual type is:  " << typeid(*shape).name() << endl;
}

int main() {
    Shape* shape = new Circle; //Dynamically allocate circle
//Downcast Rectangle
Rectangle* rectangle = dynamic_cast<Rectangle*>(shape);
if (rectangle){
    cout << "Downcast to Rectangle succesful" << endl;
} else {
    cout << "Downcast to Rectangle fail" << endl;
}

//Attempt downcast circle
Circle* circle = dynamic_cast<Circle*>(shape);
if ( circle)
{
    cout << "Downcast to Circle successful" << endl;
} else {
    cout << "Downcast to Circle fail" <<  endl;
}

//kenalpasti
indentifyShape(shape);

//clean up???
delete shape;

}