#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите сторону a: "; // Пользователь вводит данные трех сторон
	cin >> a;
	cout << "Введите сторону b: ";
	cin >> b;
	cout << "Введите сторону c: ";
	cin >> c;
	if ((a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) &&
	(b + c > a)) { // Проверка на то, что все стороны положительны, и они могу образовать треугольник
	double p = (a + b + c)/2; // Вычисление полупериметра
	double trianglePerimeter = a + b + c; // Вычисление периметра
	double triangleArea = sqrt(p * (p - a) * (p - b) * (p - c)); // Вычисление площади по формуле Герона
	cout << "Периметр треугольника: " << trianglePerimeter << endl
	<< "Площадь по формуле Герона: " << triangleArea << endl;
	}
	else {
	cout << "Данные неверны. Введите другие." << endl;
	return 0;
	}
	if ((a == b) || (b == c) || (a == c)) {cout <<
	"Треугольник равнобедренный" << endl;} // Проверка на равнобедренность
	else {cout << "Треугольник не равнобедренный" << endl;}
	return 0;
}
