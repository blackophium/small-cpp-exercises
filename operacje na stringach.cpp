#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // tablica znakow
        // char napis[20]= "Ala ma kota";
        // cout << napis << endl;
        // pamietac ze jest +1 znak, na koncu jest tzw.
        // znak null

    // sprawdzenie ostatniego znaku w stringu
        // string imie;
        // cout << "Podaj imie";
        // cin >> imie;
        // int dlugosc = imie.length();
        // if (imie[dlugosc-1]=='a')
        //    cout << "Mysle ze jestes kobieta";
        // else cout << "Mysle ze jestes facetem";

    // odwracanie stringow
        //string wyraz;
        //cout << "Podaj wyraz do odwrocenia" << endl;
        //cin >> wyraz;
        //int dlugosc = wyraz.length();
        //for(int i=dlugosc-1; i>=0; i--)
        //{
        //    cout <<wyraz[i];
        //}

    // by program traktowal spacje jak
    // normalny znak: getline(cin,napis)

    // sklejanie stringow:
        // string jeden = "Ala ma "
        // string dwa = "kota";

        // string trzy = jeden + dwa;
        // cout << trzy;

    // zmiana wielkosci liter - biblioteka algorithm:
        // string napis = "Ala ma kota";
        // transform(napis.begin(), napis.end(), napis.begin(),::toupper);
        // cout << napis;
        // transform(napis.begin(), napis.end(), napis.begin(),::tolower);
        // cout << napis;

    // szukanie frazy w tekscie:
        // string napis = "Ala ma kota";
        // string szukaj = "kot";
        // size_t pozycja = napis.find(szukaj);

        // if (pozycja != string::npos)
        //    cout << "Znaleziono na pozycji: " << pozycja;
        // else cout << "Nie znaleziono!";

    // kasowanie czesci lancucha: funkcja erase(x,y)
    // od znaku x, skasuj y-znakow
        // string napis = "Ala ma kota";
        // napis.erase(3,3);
        // cout << napis;

    // wstawianie czegos do istniejacego stringa: funkcja insert(x,"string")
    // od znaku o indeksie x, wstaw string
        // string napis = "Ala ma kota";
        // napis.insert(11," Filemona");
        // cout << napis;

    // zamienianie fargmentu stringa na inny: funkcja replace(x,y,"string")
    // od x-znaku zastêpuj, y-ile znaków zastapic, string - "czym zastapic"
    // w zasadzie y oznacza ile znakow wykasowac z istniejacego napisu
    // mozemy zastapic 2 znaki szeœcioma, to nie ma znaczenia
        // string napis = "Ala ma kota";
        // napis.replace(4,2,"nie ma");
        // cout << napis;

    // wyjêcie wybranej czesci z wnetrza lancucha
    // i zapisanie go w nowej zmiennej: substr(x,y)
    // wyjmij y-znakow od szufladki nr 4
        // string napis = "Ala ma kota";
        // string nowynapis = napis.substr(4,7);
        // cout << nowynapis;


    return 0;
}
