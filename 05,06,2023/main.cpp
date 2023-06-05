#include <iostream>
#include "Geometry.h"

void main() {

    std::cout << "Count: " << Area::getCount() << std::endl;

    double triangleBase = 5.0;
    double triangleHeight = 3.0;
    double triangleArea = Area::triangleArea2(triangleBase, triangleHeight);
    std::cout << "Triangle Area: " << triangleArea << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

    double triangleSide1 = 3.0;
    double triangleSide2 = 4.0;
    double triangleSide3 = 5.0;
    double triangleArea2 = Area::triangleArea1(triangleSide1, triangleSide2, triangleSide3);
    std::cout << "Triangle Area 2: " << triangleArea2 << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

    double rectangleLength = 4.0;
    double rectangleWidth = 6.0;
    double rectangleArea = Area::rectangleArea1(rectangleLength, rectangleWidth);
    std::cout << "Rectangle Area: " << rectangleArea << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

    double rectangleDiagonal1 = 5.0;
    double rectangleDiagonal2 = 7.0;
    double rectangleAngle = 45.0;
    double rectangleArea2 = Area::rectangleArea2(rectangleDiagonal1, rectangleDiagonal2, rectangleAngle);
    std::cout << "Rectangle Area 2: " << rectangleArea2 << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

    double squareSide = 5.0;
    double squareArea = Area::squareArea1(squareSide);
    std::cout << "Square Area: " << squareArea << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

    double squareDiagonal = 7.0;
    double squareArea2 = Area::squareArea2(squareDiagonal);
    std::cout << "Square Area 2: " << squareArea2 << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

    double rhombusDiagonal1 = 4.0;
    double rhombusDiagonal2 = 6.0;
    double rhombusArea = Area::rombArea1(rhombusDiagonal1, rhombusDiagonal2);
    std::cout << "Rhombus Area: " << rhombusArea << std::endl;
    std::cout << "Count: " << Area::getCount() << std::endl;

        double side = 5.0;
        double angle = 45.0;
        double rhombusArea2 = Area::rombArea2(side, angle);
        std::cout << "Rhombus Area: " << rhombusArea2 << std::endl;
        std::cout << "Count: " << Area::getCount() << std::endl;
    

}