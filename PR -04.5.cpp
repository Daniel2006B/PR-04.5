#include <iostream>
#include <cmath>
#include <iomanip>
#include<time.h>

using namespace std;

int main()
{
    double x, y, R;

    srand((unsigned)time(NULL));

    cout << "R = "; cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((x >= 0 && x <= R && y >= 0 && y <= R) ||
            (-R <= x && 0 >= x && -R <= y && 0 >= y) ||
            (y >= 0 && x <= 0 && (x * x + y * y >= R * R)) ||
            (x >= 0 && y <= 0 && (x * x + y * y >= R * R)))
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 4 * R * rand() / RAND_MAX - 2 * R;
        y = 4 * R * rand() / RAND_MAX - 2 * R;

        if ((x >= 0 && x <= R && y >= 0 && y <= R) ||
            (-R <= x && 0 >= x && -R <= y && 0 >= y) ||
            (y >= 0 && x <= 0 && (x * x + y * y >= R * R)) ||
            (x >= 0 && y <= 0 && (x * x + y * y >= R * R)))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}
