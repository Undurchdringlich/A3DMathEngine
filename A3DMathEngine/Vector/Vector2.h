#pragma once

#include "../Constants.h"

namespace A3DMathEngine
{
    class Vector2
    {
        public:
            Vector2();
            Vector2(double, double);

            void Inverse();
            double Length();
            Vector2 Normilize();

            Vector2 operator + ( const Vector2 );
            Vector2& operator += ( const Vector2 );
            Vector2 operator - ( const Vector2 );
            Vector2& operator -= ( const Vector2 );
            friend Vector2 operator * ( const Vector2, const double );
            friend Vector2 operator * ( const double, const Vector2 );
            Vector2& operator *= ( const double );

            static double dot( const Vector2, const Vector2 );

            void Print();

            double x;
            double y;
            
    };
}