#include <iostream>
#include <cmath>
using namespace std;
int main() { // main
        setlocale(LC_ALL, "Russian");
        double a,b,c;
        cout << "Введите сторону a: "; // Пользователь вводит стороны прямоугольника
        cin >> a; 
        cout << "Введите сторону b: ";
        cin >> b;
        if (a > 0 && b > 0) { // Проверка, что стороны положительны 
                double p = (a + b) * 2; // Вычисление периметра
                double s = a * b; // Вычисление площади
                double d = sqrt(a * a + b * b); //  Вычисление длины диагонали
                cout << "Perimeter: "<< p << endl << "Area: " << s << endl << "Diagonal: " << d << endl;
        }
        else {
                cout << "ERR" << endl; // Если не положительны, то ошибка
        }
return 0;
}
