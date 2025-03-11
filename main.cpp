#include <iostream>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // Ввод показателей для треугольника
    double a, b, c;
    cout << "Введите длины сторон треугольника (a, b, c):\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    // Проверка возможности существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Периметр треугольника: " << trianglePerimeter(a, b, c) << endl;
        cout << "Площадь треугольника: " << triangleArea(a, b, c) << endl;
        cout << "Является ли треугольник равнобедренным? " << (isRavnobedr(a, b, c) ? "Да" : "Нет") << endl;
    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }

    // Ввод показателей для прямоугольника
    double a_r, b_r;
    cout << "\nВведите длины сторон прямоугольника (a, b):\n";
    cout << "a = "; cin >> a_r;
    cout << "b = "; cin >> b_r;

    // Проверка положительности сторон прямоугольника
    if (isPositive(a_r, b_r)) {
        cout << "\nПериметр прямоугольника: " << rectanglePerimeter(a_r, b_r) << endl;
        cout << "Площадь прямоугольника: " << rectangleArea(a_r, b_r) << endl;
        cout << "Длина диагонали прямоугольника: " << rectangleDiagonal(a_r, b_r) << endl;
    } else {
        cout << "Стороны прямоугольника должны быть положительными." << endl;
    }

    return 0;
}
