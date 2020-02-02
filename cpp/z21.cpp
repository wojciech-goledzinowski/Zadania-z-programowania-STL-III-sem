//B21.Napisz program, który wczytuje nieznaną liczbę liczb typu int do kontenera <list>, a potem wypisuje je w kolejności rosnącej.

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> k;
    int liczba;

    do {
        cout << "Podaj liczbe (0 - konczy wprowadznie): ";
        cin >> liczba;
        if (liczba!=0) k.push_back(liczba);
    } while (liczba!=0);

    k.sort();

    for (auto i: k) cout << i << endl;

}
