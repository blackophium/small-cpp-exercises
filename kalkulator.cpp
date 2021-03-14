#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <conio.h>


using namespace std;

float x,y;
char wybor;

int main()

{
    for(;;)
    {
    cout << "Podaj 1 liczbe: " << endl;
    cin >> x;
    cout << endl << "Podaj 2 liczbe: " << endl;
    cin >> y;

    cout << "MENU" << endl;
    cout << "-------------------" << endl;
    cout << "1. DODAWANIE" << endl;
    cout << "2. ODEJMOWANIE" << endl;
    cout << "3. MNOZENIE" << endl;
    cout << "4. DZIELENIE" << endl;
    cout << "5. WYJSCIE" << endl;

    cout << "Wybierz dzialanie: ";
    wybor = getch();

    switch(wybor)
    {
        case '1':
            {
            cout << "Suma = " << x+y << endl;
            }
        break;

        case '2':
            {
            cout << "Roznica = " << x-y << endl;
            }
        break;

        case '3':
            {
            cout << "Iloczyn = " << x*y << endl;
            }
        break;

        case '4':
            {
                if (y != 0) {
                cout << "Iloraz = " << x/y << endl;
                }
                else cout << "Nie mozna dzielic przez zero!" << endl;
            }
        break;

        case '5':
            {
            exit(0);
            }
        break;

        default:
            {
            cout << "Nie ma takiej pozycji w menu!" << endl;
            }

    }
    getchar();
    getchar();
    system("cls");

}
    return 0;
}
