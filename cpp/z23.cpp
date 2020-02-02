//Z23 W kontenerze <list> umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy odpowiedniej metody usuń trzy ostatnie elementy kontenera. Wyświetl zawartość kontenera.
#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> k;

    for (int i=0; i<10;i++) k.push_back(i);

    for (auto i: k) cout << i << ", ";

    cout << endl;

    k.pop_back();
    k.pop_back();
    k.pop_back();

    for (auto i: k) cout << i << ", ";

}
