//BB31. W kontenerze <list> umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 3 element wstaw liczbę 1313 do kontenera. Wyświetl ponownie elementy kontenera.

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
    advance(i1,2);

    cout << endl;

    k1.insert(i1,1313);

    for(auto i:k1) cout << i <<", ";

}
