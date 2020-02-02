//A18. Napisz program, który wczytuje nieznaną liczbę liczb typu float do kontenera <deque>, sortuje te liczby, wypisuje je przy pomocy indeksów, podaje ile liczb wprowadzono.

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{

    float liczba;
    deque<float> k;

    do {
        cout << "Podaj liczbe (0 - konczy wprowadznie): ";
        cin >> liczba;
        if (liczba!=0) k.push_back(liczba);
    } while (liczba!=0);

    sort(k.begin(),k.end());

    //Wydrukowanie za pomoca indeksu

    for (int n=0;n<k.size();n++) cout << k[n] << endl;

    cout << endl;

    cout << "Ilosc elementow w kontenerze deque: "<<k.size();

}
