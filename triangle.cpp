#include <iostream>
#include <cmath>

using namespace std;

// Функция для проверки, что числа положительные
bool isPositive(double a, double b, double c) {
    return a > 0 && b > 0 && c > 0;
}

// Функция для проверки, что стороны могут образовать треугольник
bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Функция для вычисления периметра треугольника
double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

// Функция для вычисления площади треугольника по формуле Герона
double triangleArea(double a, double b, double c) {
    double p = trianglePerimeter(a, b, c) / 2; // Полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Функция для проверки, является ли треугольник равнобедренным
bool isRavnobedr(double a, double b, double c) {
    return (a == b) || (b == c) || (a == c);
}

