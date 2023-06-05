#include "Geometry.h"
#include <stdexcept>
#include <cmath>

int Area::count = 0;

int Area::getCount()
{
    return count;
}

double Area::triangleArea1(double& s1, double& s2, double& s3)
{
    count++;
    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
        throw std::invalid_argument("Side lengths must be positive.");
    }
    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        throw std::invalid_argument("The sum of any two sides of a triangle must be greater than the third side.");
    }
    float p = (s1 + s2 + s3) / 2;
    double area = sqrt(p * (p - s1) * (p - s2) * (p - s3));
    if (area <= 0) {
        throw std::runtime_error("Triangle area cannot be negative or zero.");
    }
    return area;
}

double Area::triangleArea2(double& base, double& height)
{
    count++;
    if (base <= 0 || height <= 0) {
        throw std::invalid_argument("Base and height must be positive.");
    }
    double area = 0.5 * base * height;
    if (area <= 0) {
        throw std::runtime_error("Triangle area cannot be negative or zero.");
    }
    return area;
}

double Area::rectangleArea1(double& length, double& width)
{
    count++;
    if (length <= 0 || width <= 0) {
        throw std::invalid_argument("Length and width must be positive.");
    }
    double area = length * width;
    if (area <= 0) {
        throw std::runtime_error("Rectangle area cannot be negative or zero.");
    }
    return area;
}

double Area::rectangleArea2(double& diagonal1, double& diagonal2, double& angle)
{
    count++;
    if (diagonal1 <= 0 || diagonal2 <= 0) {
        throw std::invalid_argument("Diagonal lengths must be positive.");
    }
    double area = 0.5 * diagonal1 * diagonal2 * sin(angle);
    if (area <= 0) {
        throw std::runtime_error("Rectangle area cannot be negative or zero.");
    }
    return area;
}

double Area::squareArea1(double& side)
{
    count++;
    if (side <= 0) {
        throw std::invalid_argument("Side length must be positive.");
    }
    double area = side * side;
    if (area <= 0) {
        throw std::runtime_error("Square area cannot be negative or zero.");
    }
    return area;
}

double Area::squareArea2(double& diagonal)
{
    count++;
    if (diagonal <= 0) {
        throw std::invalid_argument("Diagonal length must be positive.");
    }
    double area = 0.5 * diagonal * diagonal;
    if (area <= 0) {
        throw std::runtime_error("Square area cannot be negative or zero.");
    }
    return area;
}

double Area::rombArea1(double& d1, double& d2)
{
    count++;
    if (d1 <= 0 || d2 <= 0) {
        throw std::invalid_argument("Diagonal lengths must be positive.");
    }
    double area = (d1 * d2) / 2;
    if (area <= 0) {
        throw std::runtime_error("Rhombus area cannot be negative or zero.");
    }
    return area;
}

double Area::rombArea2(double& side, double& angle) {
    count++;
    if (side <= 0) {
        throw std::invalid_argument("Side length must be positive.");
    }
    double area = side * side * sin(angle);
    if (area <= 0) {
        throw std::runtime_error("Rhombus area cannot be negative or zero.");
    }
    return area;
}
