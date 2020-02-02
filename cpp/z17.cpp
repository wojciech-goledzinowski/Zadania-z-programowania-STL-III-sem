//A17.  Napisz program,  który wczytuje nieznaną liczbę liczb typu float  do kontenera <deque>, a potem wypisuje je w kolejności rosnącej raz przy pomocy indeksów, a raz przy pomocy iteratorów.

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
        k.push_back(liczba);
    } while (liczba!=0);

    sort(k.begin(),k.end());

    //Wydrukowanie za pomoca indeksu

    for (int n=0;n<k.size();n++) cout << k[n] << endl;

    cout << endl;

    //Wydrukowanie za pomoca iteratora

    deque<float>::iterator i;
    for (i=k.begin();i!=k.end();i++) cout << *i << endl;

}
