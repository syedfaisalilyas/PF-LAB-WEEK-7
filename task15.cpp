#include <iostream>
#include <cmath>
using namespace std;
float calculatePrice(float money, int year);

int main()
{
    float money;
    int year;
    cin >> money >> year;
    calculatePrice(money, year);
    return 0;
}

float calculatePrice(float money, int year)
{
    float totalExpenses = 0;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            totalExpenses += 12000;
        }
        else
        {
            totalExpenses += 12000 + 50 * (i - 1800);
        }
    }
    if (money >= totalExpenses)
    {
        cout << "Yes! He will live a carefree life and will have " << fixed << (money - totalExpenses) << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << fixed << (totalExpenses - money) << " dollars to survive." << endl;
    }
}
