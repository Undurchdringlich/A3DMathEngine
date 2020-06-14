#pragma once

#include "Vector2.h"

namespace A3DMathEngine
{
    class Vector3 : Vector2
    {
        public:
            Vector3();
            Vector3(double, double, double);
            Vector3(Vector2);

            void Inverse();
            double Length();
            Vector3 Normilize();

            Vector3& operator = ( const Vector2 );
            Vector3 operator + ( const Vector3 );
            Vector3& operator += ( const Vector3 );
            Vector3 operator - ( const Vector3 );
            Vector3& operator -= ( const Vector3 );
            friend Vector3 operator * ( const Vector3, const double );
            friend Vector3 operator * ( const double, const Vector3 );
            Vector3& operator *= ( const double );

            static double dot( const Vector3, const Vector3 );
            static Vector3 cross( const Vector3, const Vector3 );

            void Print();

            double x;
            double y;
            double z;
            
    };
}