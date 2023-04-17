#include <iostream>
using namespace std;
int main() {
    int Num1;
    int Num2;
    cout << "Digite el primer número" << endl;
    cin >> Num1;
    cout << "Digite el segundo número" << endl;
    cin >> Num2;
    if(Num1 == Num2)
    {
        cout << "Los números son iguales" << endl;
    }
    if (Num1 > Num2)
    {
        cout << "El primer número es mayor" << endl;
    }
    if (Num1  < Num2)
    {
        cout << "El segundo número es mayor" << endl;
    }
    return 0;
}
