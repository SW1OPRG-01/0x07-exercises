#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "triangle.h"

class Triangle {
  public:
    Triangle();
    Triangle(double a, double b, double c);
    double perimeter() const;
    double area() const;
    void setA(double a);
    void setB(double b);
    void setC(double c);
    bool setSides(double a, double b, double c);
    double getA() const;
    double getB() const;
    double getC() const;
  private:
    double a;
    double b;
    double c;
    bool inequality() const;
};

#endif