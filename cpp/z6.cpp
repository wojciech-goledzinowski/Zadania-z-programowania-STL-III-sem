//Z6. Napisz program, który wczytuje nieznaną liczbę liczb całkowitych do kontenera <wector>, sortuje te liczby, wypisuje je przy pomocy indeksów, podaje ile liczb wprowadzono.


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int liczba, ilosc;
    vector<int> k;

    do {
        cout << "Podaj liczbę (0 - kończy wprowadznie): ";
        cin >> liczba;
        k.push_back(liczba);
    } while (liczba!=0);

    sort(k.begin(),k.end());

    ilosc=k.size();

    for (int n=0;n<ilosc;n++) {cout << k[n] << endl;}

    cout << "Wprowadzono: " << ilosc << " liczb" <<endl;

}
