//Z10. Należy utworzyć kontener typu ,vector> i umieścić w nim dziesięć elementów o wartości 0.Przy pomocy iterarora i dereferencji wypełnić kontener kolejnymi setkami (wartości: 100, 200…). Następnie wykorzystując iteraror wyświetlić zawartość kontenera.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> k;
    vector<int>::iterator i;

    for(int i=0;i<10;i++){
        k.push_back(0);}

    *k.begin()=100;
    for(i=k.begin()+1;i!=k.end();i++){
        *i=*(i-1)+100;
    }

    for(i=k.begin();i!=k.end();i++){
        cout << *i << ", ";
    }
}

