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


    // uzycie biblioteki fstream
    // odczytujemy dane z pliku

    fstream plik;
    plik.open("wizytowka.txt", ios::in);

    // test czy plik istnieje

    if (plik.good() == false)
    {
        cout <<"Plik nie istnieje";
        exit(0);
    }

    // odczyt danych z pliku
    string linia;
    int nr_linii = 1;

    while(getline(plik, linia))
        {
            switch(nr_linii)
            {
                case 1: imie = linia;
                break;
                case 2: nazwisko = linia;
                break;

                // tu konwersja ze stringa na int
                // bo wszystko co idzie z pliku
                // jest stringiem

                case 3: nr_tel = atoi(linia.c_str());
                break;
            }
            nr_linii++;
        }

    // zamknij polaczenie z plikiem
    plik.close();

    // wypisz zawartosc linii na ekran
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_tel << endl;


    return 0;
}
