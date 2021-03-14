#include <iostream>

using namespace std;

float metry;

// nazwa_funkcji(argument_formalny)
float ile_cali(float m)
{
    return m * 39.37;
}

// inny sposob definiowania: cialo pod mainem
float ile_jardow(float j);

// u¿ycie procedury - tu podprogram nic nie zwraca
void ile_mil(float m)
{
    cout <<"Na mile: " << m*0.0006213;
}


int main()
{
    cout << "Ile metrow chcesz przeliczyc? " << endl;
    cin >> metry;

    // wywolanie funkcji z argumentem aktualnym
    cout << "Na cale: " << ile_cali(metry) << endl;
    cout << "Na jardy: " << ile_jardow(metry) << endl;

    // wywolanie procedury
    ile_mil(metry);

return 0;
}

// cialo funkcji pod mainem
float ile_jardow(float j)
{
    return j*1.0936;
}
