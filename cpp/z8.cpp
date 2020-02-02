//Z8. Należy utworzyć kontener typu <vector> który będzie przechowywał 10 elementów typu zmiennoprzecinkowego z precyzją 10. Każdy element ma mieć początkowo wartość 3.1415926535. Następnie pierwszy element podwajamy, a ostatni potrajamy. Wyświetlić zawartość kontenera.


#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    vector<double> k;

    for(int i=0;i<10;i++) k.push_back(3.1415926535);

    k.front()=k.front()*2;
    k.back()=k.back()*3;

    for (auto i:k) cout <<setprecision(10)<< i <<endl;

}
