#ifndef VECTOR_H
# define VECTOR_H


class Vector
{
    public:
        Vector();
        Vector(int x, int y);

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

    private:
            int x;
            int y;
};

#endif