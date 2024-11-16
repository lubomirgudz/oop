#include <iostream>
#include "module1.h"

void Func_MOD1() {
    std::string inputText;
    std::cout << "Введіть текст: ";
    std::cin.ignore(); // Очищаємо вхідний буфер
    std::getline(std::cin, inputText);
    std::cout << "Ви ввели: " << inputText << "\n";
}