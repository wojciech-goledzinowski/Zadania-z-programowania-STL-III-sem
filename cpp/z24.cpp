//Z24 PD Do kontenera <list> wprowadź z klawiatury imiona (ilość nieograniczona).Wyświetl wprowadzone imiona.


#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{

    list<string> k;
    string imie;

    do {
        cout << "Podaj imię (K - konczy wprowadznie): ";
        cin >> imie;
        if (imie!="K") k.push_back(imie);
    } while (imie!="K");

    for(auto i: k) cout << i << ", ";
}
