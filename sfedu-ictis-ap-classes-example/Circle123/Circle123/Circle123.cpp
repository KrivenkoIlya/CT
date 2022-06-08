//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#include "Figure.h"
using namespace std;
/**
 * TODO Implement constructor, destructor,  perimeter and area methods in Circle.cpp file
 *
 */
class Circle  {
public: Figure {

public:
    Circle(Point * center, int radius);

    int perimeter() override;

    int area() override;

public:
    ~Circle() {
        cout << "Class is not working now";
    }

    Circle() {
        int R = 10;
        float pi = 3.14;
        int s = (2 * pi * (R * R));
    }
}
};


int main() {
}

#endif //CLASSES_CIRCLE_H
