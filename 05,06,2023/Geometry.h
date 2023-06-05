#pragma once
#include <iostream>


class Area {

	static int count;

	Area() {};

public:

	static int getCount();

	static double triangleArea1(double& s1,double&s2,double&s3);
	static double triangleArea2(double& base, double& heigh);

	static double rectangleArea1(double& lenght, double& weigth);
	static double rectangleArea2(double& diagonal1, double& diagonal2, double& angle);

	static double squareArea1(double& side);
	static double squareArea2(double& diagonal);

	static double rombArea1(double& d1, double& d2);
	static double rombArea2(double& side, double& angle);

};
