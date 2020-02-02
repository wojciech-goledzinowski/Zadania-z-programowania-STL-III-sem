//AA28. W kontenerze <deque> należy umieścić 10 liczb typu float (od 0.0 do 9.0). Wyświetl elementy. Przy pomocy iteratora ustawionego na 2 i 3 element usuń te elementy z kontenera. Wyświetl ponownie elementy kontenera.

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<float> k1;
    deque<float>::iterator i1,i2;

    for(float i=0;i<10;i++) k1.push_back(i);

    cout << endl;

    i1=k1.begin()+1;
    i2=k1.begin()+2;

    for(auto i:k1) cout << i <<", ";

    cout << endl;

    k1.erase(i1,i2+1);

    for(auto i:k1) cout << i <<", ";
}
