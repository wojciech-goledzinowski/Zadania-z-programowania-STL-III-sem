//AA26. W kontenerze <deque> umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 4 element usuń ten element z kontenera. Wyświetl ponownie elementy kontenera.

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> k1;
    deque<int>::iterator i1;

    for(int i=0;i<10;i++) k1.push_back(i);

    for(auto i:k1) cout << i <<", ";


    i1=k1.begin()+3;

    cout << endl;

    k1.erase(i1);

    for(auto i:k1) cout << i <<", ";

}
