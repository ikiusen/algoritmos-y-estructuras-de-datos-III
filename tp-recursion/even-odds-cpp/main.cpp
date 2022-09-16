#include <iostream>
bool isEven(int n);
bool isOdd(int n);

bool isEven(int n)
{
    if (n == 0)
    {
        return true;
    }
    else
    {
        return isOdd(n - 1);
    }
}
bool isOdd(int n)
{
    if (n == 0)
    {
        return false;
    }
    else
    {
        return isEven(n - 1);
    }
}

int main()
{
    int i;
    std::cout << "Input a number" << std::endl;
    std::cin >> i;
    if (isOdd(i))
    {
        std::cout << "Number is odd" << std::endl;
    }
    else
    {
        std::cout << "Number is even" << std::endl;
    }
    return 0;
}