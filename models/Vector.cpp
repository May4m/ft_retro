#include "Vector.hpp"

Vector::Vector() : x(0), y(0) {
    return ;
}

Vector::Vector(int _x, int _y) : x(_x), y(_y) {
    return ;
}


Vector Vector::operator+(const Vector& b) {
    return Vector(b.x + this->x, b.y + this->y);
}

Vector Vector::operator+(const int factor) {
    return Vector(this->x + factor, this->y + factor);
}


Vector Vector::operator-(const Vector& b) {
    return Vector(b.x - this->x, b.y - this->y);
}

Vector Vector::operator-(const int factor) {
    return Vector(this->x - factor, this->y - factor);
}


Vector Vector::operator*(const Vector& b) {
    return Vector(b.x * this->x, b.y * this->y);
}

Vector Vector::operator*(const int factor) {
    return Vector(this->x * factor, this->y * factor);
}


Vector Vector::operator/(const Vector& b) {
    return Vector(b.x / this->x, b.y / this->y);
}

Vector Vector::operator/(const int factor) {
    return Vector(this->x / factor, this->y / factor);
}
