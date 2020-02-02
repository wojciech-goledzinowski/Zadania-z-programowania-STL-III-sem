//BB32. W kontenerze <list> umieścić 10 liczb typu float (od 0.0 do 9.0). Wyświetl elementy. Przy pomocy iteratora ustawionego na 3 i 4 element usuń te elementy z kontenera. Wyświetl ponownie elementy kontenera.

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<float> k1;
    list<float>::iterator i1,i2;

    for(float i=0;i<10;i++) k1.push_back(i);

    cout << endl;

    i1=k1.begin();
    i2=i1;
    advance(i1,2);
    advance(i2,4);

    for(auto i:k1) cout << i <<", ";

    cout << endl;

    k1.erase(i1,i2);

    for(auto i:k1) cout << i <<", ";
}
