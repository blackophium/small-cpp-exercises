#include <iostream>

using namespace std;

// int ile; -> program1


int main()
{
    // wskazniki
    // wskaznik to zmienna, która przechowuje w sobie
    // adres w pamieci ram innej zmiennej

    // np.
    // int liczba = 244;    -> adres w ram: 16250 (4 bajty)

    // wskaznik:
    // int *w;              -> tworzymy wskaznik (int)

    // w = &liczba;         -> & jest wskaznikiem na adres w ram
    // cout << w;           -> poda nam ten adres zmiennej liczba
    // cout << *w;          -> poda nam wartosc zmiennej liczba


    // po co nam to?
    // - dynamiczne rezerwowanie i zwalnianie obszarow pamieci
    //      -   rezerwujemy tyle intow ile potrzebujemy z tablicy
    //          po obliczeniach zwalniamy cala pamiec
    //          dynamiczne alokowanie pamieci -> w dowolnym momencie

        //        cout << "Ile liczb w tablicy: ";
        //        cin >> ile;
        //        int *tablica;
        //        tablica = new int [ile];
        //        for (int i=0; i<ile; i++)
        //        {
        //            cout << (int)tablica << endl;
        //            tablica++;
        //        }
        //        delete [] tablica; // -> zwolnienie pamieci


    // - zwiekszenie szybkoœci zapisu i odczytu komorek w tablicy





    // - dawanie funkcjom do pracy orygina³ów zmiennych z programu wywolujacego
    // - mo¿liwosc wspolpracy z urzadzeniem zewnetrznym np. miernikiem







    return 0;
}
