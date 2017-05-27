#ifndef VECTOR_H
# define VECTOR_H
# include <iostream>

class Vector
{
    public:
        Vector();
        Vector(int x, int y);

        int     x;
        int     y;
    
        int     getX();
        int     getY();

        void    setX(int x);
        void    setY(int y);

        Vector operator+(const Vector& b);
        Vector operator+(const int factor);

        Vector operator-(const Vector& b);
        Vector operator-(const int factor);

        Vector operator*(const Vector& b);
        Vector operator*(const int factor);

        Vector operator/(const Vector& b);
        Vector operator/(const int factor);
};

std::ostream & operator<<(std::ostream & o, Vector const &vec);
#endif