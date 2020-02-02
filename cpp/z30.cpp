//BB30. W kontenerze <list> umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 6 element usuń ten element z kontenera. Wyświetl ponownie elementy kontenera.

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> k1;
    list<int>::iterator i1;

    for(int i=0;i<10;i++) k1.push_back(i);

    for(auto i:k1) cout << i <<", ";


    i1=k1.begin();
    advance(i1,5);
    k1.erase(i1);

    cout << endl;

    for(auto i:k1) cout << i <<", ";

}
