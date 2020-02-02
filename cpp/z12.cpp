//Z12. W kontenerze <vector>  umieścić 10 liczb (od 0 do 9). Wyświetl elementy. Przy pomocy odpowiedniej metody usuń trzy ostatnie element kontenera. Wyświetl  zawartość kontenera.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> k;

    for(int i=0;i<10;i++){
        k.push_back(i);}

    k.pop_back();
    k.pop_back();
    k.pop_back();

    for(auto i:k){
        cout << i << ", ";
    }
}

