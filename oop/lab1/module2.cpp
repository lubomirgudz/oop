#include <iostream>
#include "module2.h"

void Func_MOD2() {
    int number = 0;
    std::cout << "Введіть число (1-100) за допомогою скролу: ";
    std::cin >> number;

    if (number >= 1 && number <= 100) {
        std::cout << "Вибране число: " << number << "\n";
    } else {
        std::cout << "Неправильне число. Спробуйте ще раз.\n";
    }
}