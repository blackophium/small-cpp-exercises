#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <fstream>


using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: ";
    cin >> imie;

    cout << endl << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << endl << "Podaj numer telefonu: ";
    cin >> nr_tel;

    // uzycie biblioteki fstream
    // aby plik sie nie nadpisywal, tylko dopisywal dane
    // uzywamy ios:app (append - zalacz jesli istnieje)

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);

    // zapis do pliku

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    // zamknij polaczenie z plikiem
    plik.close();



    return 0;
}
