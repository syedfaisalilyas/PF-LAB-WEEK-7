#include <iostream>
using namespace std;
int CalculateGCD(int number1, int number2);
int CalculateLCM(int number1, int number2, int gcd);
main()
{
    int number1, number2;
    cout << "Enter number1:";
    cin >> number1;
    cout << "Enter number2:";
    cin >> number2;
    int gcd = CalculateGCD(number1, number2);
    cout << gcd;
    int lcm = CalculateLCM(number1, number2, gcd);
    cout << "LCM :" << lcm;
}

int CalculateGCD(int number1, int number2)
{
    while (number2 != 0)
    {
        int n = number2;
        number2 = number1 % number2;
        number1 = n;
    }
    return number1;
}
int CalculateLCM(int number1, int number2, int gcd)
{
    int lcm = (number1 * number2) / gcd;
    return lcm;
}