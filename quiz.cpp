#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <algorithm>


using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty = 0;


int nr_pytania = 0;


int main()
{
    int nr_linii = 1;
    string linia;

    fstream plik;
    plik.open("quiz.txt", ios::in);

    if(plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        exit(0);
    }

    while(getline(plik,linia))
    {
        switch (nr_linii)
        {
            case 1: temat = linia;
            break;

            case 2: nick = linia;
            break;

          //  for(int i=0; i<5; i++)
          //  {
                case 3: tresc[nr_pytania] = linia;
                break;
                case 4: odpA[nr_pytania] = linia;
                break;
                case 5: odpB[nr_pytania] = linia;
                break;
                case 6: odpC[nr_pytania] = linia;
                break;
                case 7: odpD[nr_pytania] = linia;
                break;
                case 8: poprawna[nr_pytania] = linia;
                break;
            //}

        }
        if (nr_linii == 8)
        {
        nr_linii = 2;
        nr_pytania++;
        }
        nr_linii++;
    }
    plik.close();

    for (int i=0; i<4; i++)
    {
        cout<<endl<<tresc[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl;
        cout<<"D. "<<odpD[i]<<endl;

        cout << "Podaj poprawna odpowiedz: ";
        cin >> odpowiedz;

        // zmiana w razie co na male litery
        transform(odpowiedz.begin(),odpowiedz.end(),odpowiedz.begin(), ::tolower);

        // sprawdzenie poprawnosci odpowiedzi
        if (odpowiedz == poprawna[i])
        {
            cout << "Gratulacje, zdobywasz punkt!" <<endl;
            punkty++;
        }
        else
        {
            cout <<"Zle. :( Poprawna odpowiedz to: " <<poprawna[i] <<endl;
        }

    }

    cout << "Koniec quizu!" << endl;
    cout << "Zdobyles dzisiaj: " << punkty << "punktow." << endl;

    return 0;
}
