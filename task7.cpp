#include <iostream>
using namespace std;
int sum(int number);
main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    int result = sum(number);
    cout << result;
}

int sum(int number)
{
    int number1;
    int result = 0;
    while (number > 0)
    {
        number1 = number % 10;
        number = number / 10;
        result = result + number1;
    }
    return result;
}
