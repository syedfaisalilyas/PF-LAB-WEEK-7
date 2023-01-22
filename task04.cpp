#include <iostream>
using namespace std;
int frequencycheck(int number, int);
main()
{
    int number, digit;
    cout << "Enter number:";
    cin >> number;
    cout << "Enter digit:";
    cin >> digit;
    int result = frequencycheck(number, digit);
    cout << result;
}

int frequencycheck(int number, int digit)
{
    int result = 0;
    int remainder;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (remainder == digit)
        {
            result = result + 1;
        }
    }
    return result;
}
