#include "Vector3.h"

namespace A3DMathEngine
{
    Vector3::Vector3() : x(0), y(0), z(0) {}

    Vector3::Vector3( double _x, double _y, double _z ) : x(_x), y(_y), z(_z) {}

    Vector3::Vector3( const Vector2 vec2 ) : x(vec2.x), y(vec2.y), z(0) {}

    void Vector3::Inverse()
    {
        x = -x;
        y = -y;
        z = -z;
    }

    double Vector3::Length()
    {
        return sqrt( pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2) );
    }

    Vector3 Vector3::Normilize()
    {
        double length = this->Length();
        return Vector3( this->x / length, this->y / length, this->z / length );
    }

    Vector3& Vector3::operator = ( const Vector2 vec2 )
    {
        this->x = vec2.x;
        this->y = vec2.y;
        this->z = 0;

        return *this;
    }

    Vector3 Vector3::operator + ( const Vector3 v2 )
    {
        return Vector3( this->x + v2.x, this->y + v2.y, this->z + v2.z );
    }

    Vector3& Vector3::operator += ( const Vector3 v2 )
    {
        this->x += v2.x;
        this->y += v2.y;
        this->z += v2.z;
        return *this;
    }

    Vector3 Vector3::operator - ( const Vector3 v2 )
    {
        return Vector3( this->x - v2.x, this->y - v2.y, this->z - v2.z );
    }

    Vector3& Vector3::operator -= ( const Vector3 v2 )
    {
        this->x -= v2.x;
        this->y -= v2.y;
        this->z -= v2.z;

        return *this;
    }

    Vector3 operator * ( Vector3 v2, const double scalar )
    {
        return scalar * v2;
    }

    Vector3 operator * ( const double scalar, Vector3 v2 )
    {
        return Vector3( v2.x * scalar, v2.y * scalar, v2.z * scalar );
    }

    Vector3& Vector3::operator *= ( const double scalar )
    {
        this->x *= scalar;
        this->y *= scalar;
        this->z *= scalar;

        return *this;
    }

    double Vector3::dot( const Vector3 v1, const Vector3 v2 )
    {
        return ( v1.x * v2.x + v1.y * v2.y + v1.z * v2.z );
    }

    Vector3 Vector3::cross( const Vector3 v1, const Vector3 v2 )
    {
        Vector3 result;

        result.x = v1.y * v2.z - v1.z * v2.y;
        result.y = v1.z * v2.x - v1.x * v2.z;
        result.z = v1.x * v2.y - v1.y * v2.x;

        return result;
    }

    void Vector3::Print()
    {
        std::cout << "x: " << this->x << std::endl;
        std::cout << "y: " << this->y << std::endl;
        std::cout << "z: " << this->z << std::endl;
    }
}