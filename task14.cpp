#include <iostream>
#include <iomanip>
using namespace std;
void calculateMoney(int age, float price, int toyPrice);

int main()
{
    int age;
    float price;
    int toyPrice;
    cout << "Enter age:";
    cin >> age;
    cout << "Enter price of washing machine:";
    cin >> price;
    cout << "Enter toyprice:";
    cin >> toyPrice;
    calculateMoney(age, price, toyPrice);
}

void calculateMoney(int age, float price, int toyPrice)
{
    float money = 0;
    int a = 10;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money += a;
            money -= 1;
            a += 10;
        }
        else
        {
            money += toyPrice;
        }
    }
    if (money >= price)
    {
        cout << "Yes! " << fixed << setprecision(2) << money - price << endl;
    }
    else
    {
        cout << "No! " << fixed << setprecision(2) << price - money << endl;
    }
}