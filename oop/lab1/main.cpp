#include <iostream>
#include "module1.h"
#include "module2.h"

void showMenu() {
    std::cout << "Оберіть дію:\n";
    std::cout << "1. Робота1: Ввід тексту\n";
    std::cout << "2. Робота2: Вибір числа за допомогою скролбару\n";
    std::cout << "Ваш вибір: ";
}

int main() {
    int choice;
    showMenu();
    std::cin >> choice;

    switch (choice) {
        case 1:
            Func_MOD1();
            break;
        case 2:
            Func_MOD2();
            break;
        default:
            std::cout << "Неправильний вибір.\n";
            break;
    }

    return 0;
}