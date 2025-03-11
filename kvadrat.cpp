#include <iostream>
#include <cmath>

using namespace std;

// Функция для проверки, что числа положительные
bool isPositive(double a, double b) {
    return a > 0 && b > 0;
}

// Функция для вычисления периметра прямоугольника
double rectanglePerimeter(double a, double b) {
    return 2 * (a + b);
}

// Функция для вычисления площади прямоугольника
double rectangleArea(double a, double b) {
    return a * b;
}

// Функция для вычисления длины диагонали прямоугольника
double rectangleDiagonal(double a, double b) {
    return sqrt(a * a + b * b);
}


