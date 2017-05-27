#include <Vector.hpp>

Vector2D::Vector2D() {
    return;
}

Vector2D::Vector2D(int x, int y) : x(x) y(y) {
    return;
}

/*--------------------------------------------------------*/
Vector2D Vector2D::Vector2D operator+(const Vector2D& b) {
    return Vector2D(b.x + this->x, b.y + this->y);
}

Vector2D Vector::Vector2D operator+(const int factor) {
    return Vector2D(this->x + factor, this->y + factor);
}

/*--------------------------------------------------------*/
Vector2D Vector2D::Vector2D operator-(const Vector2D& b) {
    return Vector2D(b.x - this->x, b.y - this->y);
}

Vector2D Vector::Vector2D operator-(const int factor) {
    return Vector2D(this->x - factor, this->y - factor);
}

/*--------------------------------------------------------*/
Vector2D Vector2D::Vector2D operator*(const Vector2D& b) {
    return Vector2D(b.x * this->x, b.y * this->y);
}

Vector2D Vector::Vector2D operator*(const int factor) {
    return Vector2D(this->x * factor, this->y * factor);
}

/*-------------------------------------------------------*/
Vector2D Vector2D::Vector2D operator/(const Vector2D& b) {
    return Vector2D(b.x / this->x, b.y / this->y);
}

Vector2D Vector::Vector2D operator/(const int factor) {
    return Vector2D(this->x / factor, this->y / factor);
}

/*--------------------------------------------------------*/