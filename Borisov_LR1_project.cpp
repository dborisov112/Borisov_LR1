/* - ввести А
- ввести В
- выполнить операцию “*”
- выполнить операцию “/” */
#include <iostream>
#include <cmath> 
using namespace std;
double A, B;
int enterA(){
    cin >> A;
    return A;
}
int main() {
    int choice;
    do { 
        cout << "Меню:\n";
        cout << "2. Ввести число B\n"; 
        cout << "3. Вывести результат умножения A на B\n";
        cout << "4. Вывести результат деления A на B\n";
    cin >> choice;
    switch (choice) { 
        case 1: 
            cout << "Введите число A: ";
            enterA();
            cout << endl;
            break; 
        case 2:
            cout << "Введите число B: ";
            enterB();
            cout << endl;
            break;
        case 3:
            cout << "Результат умножения A на B: " << getResultMult(A, B) << endl;
            break;
        case 4:
            cout << "Результат деления A на B" << getResultDivision(A, B) << endl;
            break;
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Ошибка. Попробуйте снова." << endl; 
    }} while (choice != 0);
    return 0;
 }