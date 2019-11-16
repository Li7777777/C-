#include <iostream>
using namespace std;

#include "Coordinate.h"

Coordinate::Coordinate(int x, int y) {
    this->x=x;
    this->y=y;
}
Coordinate::~Coordinate() {cout<<"析构C"<<endl;}

void Coordinate::setX(int x) {this->x=x;}
void Coordinate::setY(int y) {this->y=y;}

int Coordinate::getX() const {return this->x;}
int Coordinate::getY() const {return this->y;}



