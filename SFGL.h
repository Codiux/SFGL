#include <cmath>

#define pi 3.1415926535

namespace calculate 
{
    ////////// 2D ////////////
    namespace square 
    {
        float area(float side) {
            return side * side;
        }
        float perimeter(float side) {
            return side * 2;
        }
        float diagonal(float side) {
            return std::sqrt(side * side + side * side);
        }
    }
    namespace rectangle 
    {
        float area(float width, float length) {
            return width * length;
        }
        float perimeter(float width, float length) {
            return 2 * (width * length);
        }
        float diagonal(float width, float height) {
            return std::sqrt(width * width + height * height);
        }
    }
    namespace circle 
    {
        float area(float radius) {
            return pi * radius * radius;
        }
        float circumference(float radius) {
            return 2 * pi * radius;
        }
        float diameter(float radius) {
            return radius * 2;  
        }
    }
    namespace triangle 
    {
        namespace equilateral 
        {
            float area(float side) {
                return (std::sqrt(3) / 4) * (side * side);
            }
            float perimeter(float side) {
                return side * 3;
            }
        }
        namespace isosceles 
        {
            float area(float base, float height) {
                return 0.5 * (base * height);
            }
            float perimeter(float base, float side) {
                return 2 * side + base;
            }

        }
        namespace scalene
        {
            float area(float base, float height) {
                return 0.5 * (base * height);
            }
            float perimeter(float a, float b, float c) {
                return a + b + c;
            }
        }
        namespace right
        {
            float area(float adjacent, float opposite) {
                return 0.5 * (adjacent * opposite);
            }
            float perimeter(float adjacent, float opposite) {
                return adjacent + opposite + std::sqrt(adjacent * adjacent + opposite * opposite);
            }
            float hypotenuse(float adjacent, float opposite) {
                return std::sqrt(adjacent * adjacent + opposite * opposite);
            }
        }
    }
    namespace parallelogram {
        float area(float base, float height) {
            return base * height;
        }
        float perimeter(float base, float height) {
            return 2 * (base * height);
        }
        float base(float side, float perimeter) {
            return perimeter / 2 - side;
        }
        float side(float base, float perimeter) {
            return perimeter / 2 - base;
        }
    }
    namespace trapezoid {
        float area(float bottomBase, float topBase, float height) {
            return 0.5 * (topBase + bottomBase) * height;
        }
        float perimeter(float bottomBase, float topBase, float leftSide, float rightSide) {
            return bottomBase + topBase + leftSide + rightSide;
        }
        namespace base {
            float a(float bottomBase, float leftSide, float rightSide, float perimeter) {
                return perimeter - bottomBase - leftSide - rightSide;
            }
            float b(float topBase, float height, float area) {
                return 2 * (topBase / height) - area;
            }
        }
        namespace side {
            float c(float topBase, float bottomBase, float rightSide, float perimeter) {
                return perimeter - topBase - bottomBase - rightSide;
            }
            float d(float topBase, float bottomBase, float rightSide, float perimeter) {
                return perimeter - topBase - bottomBase - rightSide;
            }   
        }
    }
    namespace rhombus {
        float area(float width, float height) {
            return 0.5 * (width * height);
        }
        float perimeter(float side) {
            return side * 4;
        }
        float width(float height, float area) {
            return 2 * (area / height);
        }
        float height(float width, float area) {
            return 2 * (area / width);
        }
    }
    namespace polygon {
        
    }
    /////////// 3D /////////////
    namespace cube {

    }
    namespace cuboid {

    }
    namespace sphere {

    }
    namespace cylinder {

    }
    namespace cylinder {

    }
    namespace cone {

    }
    namespace tetrahedron {

    }
    namespace triagularPrism {

    }
    namespace squarePyramid {

    }
    namespace hexagonalPyramid {

    }
    namespace hexagonalPrism {

    }
    namespace pentagonalPrism {

    }
    namespace pentagonalPyramid {

    }
    namespace icosahedron {

    }
    namespace torus {

    }
    namespace octahedron {

    }
    namespace ellipsoid {

    }
    namespace helix {

    }
    namespace octagonalPrism {

    }
}