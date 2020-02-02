//AAA34.W pierwszym kontenerze typu <list> umieść liczby 0,1,2,3,4, w drugim kontenerze typu <list> umieść liczby 2,3,4,5,6,7. Wyświetl zawartość tych kontenerów. W trzecim kontenerze typu <list> umieść elementy pierwszego i drugiego kontenera. Wyświetl zawartość tego kontenera.

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> k1 {0,1,2,3,4};
    list<int> k2 {2,3,4,5,6,7};
    list<int> k3;

    for(auto i:k1) cout << i << ", ";

    cout << endl;

    for(auto i:k2) cout << i << ", ";

    k3.splice(k3.end(),k1);
    k3.splice(k3.end(),k2);

    cout << endl;

    for(auto i:k3) cout << i << ", ";

}

