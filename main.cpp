#include <iostream>

using namespace std;
void horas (int s)
{
    int horas = s/ 360;
    s = s%360;
    int minutos = s/60;
    int segundos = s%60;
    cout << horas << " horas(s) " << minutos << " minutos(s) e " << segundos << " segundos(s) ";
}
int main()
{
    int s;
    cout << "Digite os segundos" << endl;
    cin >> s;
    horas(s);
    return 0;
}
