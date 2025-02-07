#include <iostream>

int sumTwoNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    int firstNumber{3}; // Statement
    int secondNumber{7};

    std::cout << "First number: " << firstNumber << std::endl;
    std::cout << "Second number: " << secondNumber << std::endl;

    std::cout << "Sum of two numbers:" << sumTwoNumbers(firstNumber, secondNumber) << std::endl;
    std::cout << "Sum of two numbers:" << sumTwoNumbers(17, 23) << std::endl;

    return 0;
}