#ifdef VECTOR_H
# define VECTOR_H


class Vector2D
{
    public:
        Vector2D();
        Vector2D(int x, int y);

        int     getX();
        int     getY();

        void    setX(int x);
        void    setY(int y);

        Vector2D operator+(const Vector2D& b);
        Vector2D operator+(const int factor);

        Vector2D operator-(const Vector2D& b);
        Vector2D operator-(const int factor);

        Vector2D operator*(const Vector2D& b);
        Vector2D operator*(const int factor);

        Vector2D operator/(const Vector2D& b);
        Vector2D operator/(const int factor);

    private:
            int x;
            int y;
};

#endif