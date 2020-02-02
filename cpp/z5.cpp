//Z5. Napisz program, który wczytuje nieznaną liczbę liczb całkowitych do kontenera <wector>, a potem wypisuje je w kolejności rosnącej raz przy pomocy indeksów, a raz przy pomocy iteratorów.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int liczba;
    vector<int> k;

    do {
        cout << "Podaj liczbę (0 - kończy wprowadznie): ";
        cin >> liczba;
        k.push_back(liczba);
    } while (liczba!=0);

    sort(k.begin(),k.end());

    //Wydrukowanie za pomoca indeksu

    for (int n=0;n<k.size();n++) cout << k[n] << endl;

    cout << endl;

    //Wydrukowanie za pomoca iteratora

    vector<int>::iterator i;
    for (i=k.begin();i!=k.end();i++) cout << *i << endl;

}
