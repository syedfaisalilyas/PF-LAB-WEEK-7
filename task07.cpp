#include <iostream>
using namespace std;

main()
{
    float number, n, count;
    float per1, per2, per3, per4, per5;
    cout << "Enter number of numbers:";
    cin >> number;
    float a = 0, total = 0, total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
    float per;
    while (a < number)
    {
        cout << "Enter number:" << endl;
        cin >> n;
        a += 1;
        if (n > 0)
        {
            if (n < 200)
            {
                total1 = total + 1;
            }

            else if (n >= 200 && n < 400)
            {
                total2 = total + 1;
            }

            else if (n >= 400 && n < 599)
            {
                total3 = total + 1;
            }

            else if (n >= 600 && n < 799)
            {
                total4 = total + 1;
            }

            else
            {
                total5 = total + 1;
            }
        }
    }
    per1 = (total1 * 100) / number;
    per2 = (total2 * 100) / number;
    per3 = (total3 * 100) / number;
    per4 = (total4 * 100) / number;
    per5 = (total5 * 100) / number;
    cout << per1 << endl;
    cout << per2 << endl;
    cout << per3 << endl;
    cout << per4 << endl;
    cout << per5 << endl;
}