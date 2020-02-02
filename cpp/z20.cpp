//Z20 Do kontenera <deque> wprowadź z klawiatury nazwy miast(ilość nieograniczona).Wyświetl wprowadzone miasta.


#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{

    deque<string> k;
    string miasto;

    do {
        cout << "Podaj nazwe miasta (K - konczy wprowadznie): ";
        cin >> miasto;
        if (miasto!="K") k.push_back(miasto);
    } while (miasto!="K");

    //Wydrukowanie za pomoca indeksu

    for (int n=0;n<k.size();n++) cout << k[n] << endl;

    cout << endl;
}
