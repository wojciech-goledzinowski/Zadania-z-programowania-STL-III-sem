//Z22 Napisz program, który wczytuje nieznaną liczbę liczb całkowitych do kontenera <list>, wypisuje je oraz podaje ile liczb wprowadzono.

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> k;
    int liczba;

    do {
        cout << "Podaj liczbę (0 - konczy wprowadznie): ";
        cin >> liczba;
        if (liczba!=0) k.push_back(liczba);
    } while (liczba!=0);

    for (auto i: k) cout << i << endl;

    cout << endl;
    cout << "Wprowadzono: " << k.size();
}
