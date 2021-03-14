#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <conio.h>


using namespace std;

int nr_mies;

int main()
{
    cout << "Podaj nr miesiaca: " << endl;
    cin >> nr_mies;

    switch(nr_mies)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 dni" << endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 dni" << endl;
        break;
        case 2:
            {
            int rok;
            cout << "Podaj rok: " << endl;
            cin >> rok;
            if (((rok%4 == 0) && (rok%100 != 0)) || (rok%400 == 0))
                cout <<"29 dni" << endl;
            else
                cout <<"28 dni" << endl;
        default:
            cout << "Liczba niepoprawna." << endl;

            }
    }

    return 0;
}
