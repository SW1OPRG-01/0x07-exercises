#include "triangle.h"
#include <cmath>

Triangle::Triangle() : a(1), b(1), c(1) { }

Triangle::Triangle(double a, double b, double c) {
  setSides(a, b, c);
}

bool Triangle::setSides(double a, double b, double c) {
  bool inequality = this->inequality() && a > 0 && b > 0 && c > 0;
  if(!inequality) {
    return false;
  } 
  this->a = a; 
  this->b = b; 
  this->c = b;
  return true;
}

double Triangle::perimeter() const {
  return getA() + getB() + getC();
}

double Triangle::area() const {
  double s = 0.5 * perimeter();
	return round(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
}

double Triangle::getA() const {
  return this->a;
}

double Triangle::getB() const {
  return this->b;
}

double Triangle::getC() const {
  return this->c;
}

void Triangle::setA(double a) {
  if(a > 0 && inequality()) {
    this->a = a;
  }
}

void Triangle::setB(double b) {
  if(b > 0 && inequality()) {
    this->b = b;
  }
}

void Triangle::setC(double c) {
  if(c > 0 && inequality()) {
    this->c = c;
  }
}

bool Triangle::inequality() const {
  return (a + b >= c) && (a + c >= b) && (b + c >= a);
}