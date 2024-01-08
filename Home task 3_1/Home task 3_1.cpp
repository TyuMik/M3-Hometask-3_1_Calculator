
#include <iostream>

class Calculator {

public:
    double add(double num1, double num2) {
        std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
        return (num1 + num2);
    }
    double multiply(double num1, double num2) {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
        return (num1 * num2);
    }
    double subtract_1_2(double num1, double num2) {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
        return (num1 - num2);
    }
    double subtract_2_1(double num1, double num2) {
            std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
            return (num2 - num1);
    }
    double divide_1_2(double num1, double num2) {
        std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
        return (num1 / num2);
    }
    double divide_2_1(double num1, double num2) {
        std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        return (num2 / num1);
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }; 
        return false;
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        };
        return false;
    }

private:
    double num1;
    double num2;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    Calculator calculator{};
    double num1, num2;

    do {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;

        while (calculator.set_num1(num1) == false || calculator.set_num2(num2) == false) {
            std::cout << "Неверный ввод!" << std::endl;
            if (calculator.set_num1(num1) == false) {
                std::cout << "Введите num1: ";
                std::cin >> num1;
            }
            if (calculator.set_num2(num2) == false) {
                std::cout << "Введите num2: ";
                std::cin >> num2;
            }
        }
            std::cout << std::endl; 

            calculator.add(num1, num2);
            calculator.multiply(num1, num2);
            calculator.subtract_1_2(num1, num2);
            calculator.subtract_2_1(num1, num2);
            calculator.divide_1_2(num1, num2);
            calculator.divide_2_1(num1, num2);

            std::cout << std::endl;

    } while (true);

    return 0;
}