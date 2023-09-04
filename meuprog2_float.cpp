#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
    float numero1, numero2;
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;


    cout << fixed<<setprecision(1) << "Soma: " << numero1 + numero2 << endl;
    cout << fixed<<setprecision(1) << "Subtracao: " << numero1 - numero2 << endl;
    cout << fixed<<setprecision(1) << "Multiplicacao: " << numero1 * numero2 << endl;
    cout << fixed<<setprecision(1) << "Divisao: " << floor(numero1 / numero2 * 10) / 10 << endl;

    return 0;
}
