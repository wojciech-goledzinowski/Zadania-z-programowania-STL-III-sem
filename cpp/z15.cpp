//Z15. Do jednego kontenera można wstawiać element innego kontenera. Należy wykorzystać trzy iteratory. W pierwszym  kontenerze <vector>  umieścić 10 liczb (od 0 do 9). W drugim kontenerze umieść liczby setkami (od 100 do 900).  Przy pomocy pierwszego iteratora ustawiamy pozycje w pierwszym kontenerze, gdzie umieścimy fragment drugiego kontenera. Drugi iterator ustawiamy na początek zakresu drugiego kontenera , a trzeci iterator ustawiamy na koniec tego zakresu. Do kontenera pierwszego wstawiamy wskazane elementy kontenera drugiego. Wyświetlamy elementy  kontenera pierwszego i drugiego.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> k1,k2;
    vector<int>::iterator i1,i2,i3;

    for(int i=0;i<10;i++){
        k1.push_back(i);}

    //wyświetlam pierwszy kontener
    for(auto i:k1){
        cout << i << ", ";
    }

    cout << endl;

    for(int i=100;i<1000;i+=100){
        k2.push_back(i);}

    //wyświetlam drugi kontener
    for(auto i:k2){
        cout << i << ", ";
    }
    //iterator na pierwszy element kontener k1

    // i1=k1.begin()+5; - wczyta bazę od indeksu 6 (bo numeracja od 0)
    i1=k1.begin();

    //iterator na pierwszy i ostatni element k2
    i2=k2.begin();
    i3=k2.end();

    k1.insert(i1,i2,i3);

    cout << endl;

    //wyświetlam pierwszy po zmianach
    for(auto i:k1){
        cout << i << ", ";
    }


}

