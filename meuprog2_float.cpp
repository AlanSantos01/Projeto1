#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    float numero1, numero2;
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;


    cout << "Soma: " << numero1 + numero2 << endl;
    cout << "Subtracao: " << numero1 - numero2 << endl;
    cout << "Multiplicacao: " << numero1 * numero2 << endl;
    cout << "Divisao: " << numero1 / numero2 << endl;

    return 0;
}