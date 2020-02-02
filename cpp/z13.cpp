//Z13. W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy iteratora ustawionego na 4 element usuń ten element z kontenera. Wyświetl ponownie elementy kontenera.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> k;
    vector<int>::iterator i;

    for(int i=0;i<10;i++){
        k.push_back(i);}

    for(auto i:k){
        cout << i << ", ";
    }

    i=k.begin()+3;
    k.erase(i);

    cout << endl;

    for(auto i:k){
        cout << i << ", ";
    }
}

