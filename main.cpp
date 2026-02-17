#include "Matrix.h"
#include "Vector.h"
// #include "Shape.h"
// #include "Triangle.h"
// #include "Square.h"

#include <iostream>

#include <sstream>

int main(int argc, char const *argv[])
{
    std::cout << "=====================Testing Vector=====================" << std::endl;

    // Default constructor
    Vector<3> vec1 = Vector<3>();
    std::cout << "Vec1 created:" << std::endl;
    vec1.print();
    std::cout << "Size of vec1 is " << vec1.getN() << std::endl;

    Vector<3> vec2 = Vector<3>();
    std::cout << "Vec2 has been created" << std::endl;
    vec2.print();
    std::cout << "Size of vec2 is " << vec2.getN() << std::endl;

    //Initializer list constructor
    Vector<3> vec3 = Vector<3>{1.0, 2.0, 3.0};
    std::cout << "Vec3 has been created using initializer list" << std::endl;
    vec3.print();
    

    //Vector mulitpilication
    float x = 2.0;
    Vector<3> vec4 = vec3 * x;
    std::cout << "Vec4 after scaling up by " << x << std::endl;
    vec4.print();

     // Copy constructor
    Vector<3> vec5 = Vector<3>(vec3);
    std::cout << "Vec5 (copy of vec3):" << std::endl;
    vec5.print();

    // Assignment operator
    vec1 = vec3;
    std::cout << "Vec1 after assignment from vec3:" << std::endl;
    vec1.print();

    // Addition
    Vector<3> vec6 = vec3 + vec4;
    std::cout << "Vec6 (vec3 + vec4):" << std::endl;
    vec6.print();

    // Subtraction
    Vector<3> vec7 = vec4 - vec3;
    std::cout << "Vec7 (vec4 - vec3):" << std::endl;
    vec7.print();

    // Dot product
    float dotProduct = vec3 * vec4;
    std::cout << "Dot product of vec3 and vec4: " << dotProduct << std::endl;

    // Magnitude
    float magnitudeVec3 = vec3.magnitude();
    std::cout << "Magnitude of vec3: " << magnitudeVec3 << std::endl;

    // Cross product
    Vector<3> crossProduct = vec3.crossProduct(vec4);
    std::cout << "Cross product of vec3 and vec4:" << std::endl;
    crossProduct.print();

    // Unit vector
    Vector<3> unitVec3 = vec3.unitVector();
    std::cout << "Unit vector of vec3:" << std::endl;
    unitVec3.print();

    // Cross product
    Vector<3> a = Vector<3>{1.0, 0.0, 0.0};
    Vector<3> b = Vector<3>{0.0, 1.0, 0.0};
    Vector<3> cross = a.crossProduct(b);
    std::cout << "Cross product (1,0,0) x (0,1,0) [expect 0,0,1]:" << std::endl;
    cross.print();

    std::cout << "=====================Vector testing complete=====================" << std::endl;
    std::cout << std::endl;

    std::cout << "=====================Testing Matrix=====================" << std::endl;

}