//A19. W kontenerze <deque> umieścić 10 liczb typu float (od 0.0 do 9.0). Wyświetl elementy. Przy pomocy odpowiedniej metody usuń trzy ostatnie elementy kontenera. Wyświetl zawartość kontenera.

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<float> k1;

    for(float i=0;i<10;i++) k1.push_back(i);

    cout << endl;

    for(auto i:k1) cout << i <<", ";

    k1.pop_back();
    k1.pop_back();
    k1.pop_back();

    cout << endl;

    for(auto i:k1) cout << i <<", ";


}
