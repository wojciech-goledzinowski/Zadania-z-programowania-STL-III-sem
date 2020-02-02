//Z16. Do kontenera <vector> wprowadź z klawiatury imiona (ilość nieograniczona). Wyświetl wprowadzone imiona.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<string> k;
    string imie;

    do {
        cout << "Podaj imie (K - konczy wprowadznie): ";
        cin >> imie;
        if (imie!="K") k.push_back(imie);
    } while (imie!="K");

    for(auto i: k) cout << i << ", ";
}
