#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int v;
    int jarak;
    float Vtangensial;
    cin >> v;
    switch (v)
    {
        case 1 ... 10:
        v-=1;
        break;
        case 11 ... 20:
        v-=3;
        break;
        case 21 ... 30:
        v-=5;
        break;
    }

    jarak = v*v/10;
    Vtangensial = sqrt(jarak*10)+ 5;

    cout << jarak << " " << Vtangensial << endl ;
    return 0;
}
