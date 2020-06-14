#include "Vector2.h"

namespace A3DMathEngine
{
    Vector2::Vector2()
    {
        Vector2(0, 0);
    }

    Vector2::Vector2( double _x, double _y ) : x(_x), y(_y) {}

    void Vector2::Inverse()
    {
        x = -x;
        y = -y;
    }

    double Vector2::Length()
    {
        return sqrt( pow(this->x, 2) + pow(this->y, 2) );
    }

    Vector2 Vector2::Normilize()
    {
        double length = this->Length();
        return Vector2( this->x / length, this->y / length );
    }

    Vector2 Vector2::operator + ( const Vector2 v2 )
    {
        return Vector2( this->x + v2.x, this->y + v2.y );
    }

    Vector2& Vector2::operator += ( const Vector2 v2 )
    {
        this->x += v2.x;
        this->y += v2.y;
        return *this;
    }

    Vector2 Vector2::operator - ( const Vector2 v2 )
    {
        return Vector2( this->x - v2.x, this->y - v2.y );
    }

    Vector2& Vector2::operator -= ( const Vector2 v2 )
    {
        this->x -= v2.x;
        this->y -= v2.y;

        return *this;
    }

    Vector2 operator * ( Vector2 v2, const double scalar )
    {
        return scalar * v2;
    }

    Vector2 operator * ( const double scalar, Vector2 v2 )
    {
        return Vector2( v2.x * scalar, v2.y * scalar );
    }

    Vector2& Vector2::operator *= ( const double scalar )
    {
        this->x *= scalar;
        this->y *= scalar;

        return *this;
    }

    double Vector2::dot( const Vector2 v1, const Vector2 v2 )
    {
        return ( v1.x * v2.x + v1.y * v2.y );
    }

    void Vector2::Print()
    {
        std::cout << "x: " << this->x << std::endl;
        std::cout << "y: " << this->y << std::endl;
    }
}