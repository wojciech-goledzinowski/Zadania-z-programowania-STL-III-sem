//Z9. Należy utworzyć kontener <vector> i umieścić w nim dziesięć liczb parzystych ( od 2). Utworzyć drugi kontener typu <vector> , który będzie kopią pierwszego kontenera. Wydrukować elementy drugiego kontenera.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> k;
    vector<int> kk;

    for(int i=2;i<22;i+=2){
        k.push_back(i);
    }

    kk=k;

    for(auto j: kk){
        cout << j<< ", ";
    }



}

