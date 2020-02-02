//Z7. Napisz program, który zapisuje  liczby 3,6,9,12,15 w kontenerze <wector> przy pomocy metody push_back(). Wyświetla te liczby przy pomocy indeksu oraz funkcji at().  Program wyświetla pierwszy i ostatni element ( nie używać indeksu).

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> k;
    k.push_back(3);
    k.push_back(6);
    k.push_back(9);
    k.push_back(12);
    k.push_back(15);

    for (int n = 0; n < k.size(); n++)
    {
        cout << k.at(n) << endl;
    }

    cout << endl
         << "Pierwszy element: " << k.front() << endl;
    cout << "Ostatni element: " << k.back();
}
