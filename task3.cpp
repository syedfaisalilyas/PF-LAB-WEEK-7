#include <iostream>
using namespace std;
int totaldigits(int number);
main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    int result = totaldigits(number);
    cout << result;
}

int totaldigits(int number)
{
    int result = 0;
    while (number > 0)
    {
        number = number / 10;
        result = result + 1;
    }
    return result;
}
