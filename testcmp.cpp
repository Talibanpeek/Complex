#include <iostream>
#include "mycomplex.h"

using namespace std;

int main() {                                        // Тестирование класса комплексных чисел
    Complex A, B(-4), C(23.0, 45.9);                // Создадим три комплексных числа
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    A = B + C;
    cout << "A = B + C\nA = " << A << endl;
    Complex M = B - C;
    cout << "M = B - C\nM = " << M << endl;
    cout << "M * A = " << M * A << endl;
    cout << "M / 4.45 = "<< M / 4.45 << endl;
    Complex D;
    cout << "Enter complex number D = ";            // Создание коспелксного числа путём ввода его через консоль
    cin >> D;
    A += C + D;
    cout << "D = " << D << "\nA = " << A << endl;
    return 0;
}
