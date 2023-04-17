#include <iostream>
using namespace std;
int main() {
    int edad;
    int género;
    cout << "Diga su edad" << endl;
    cin >>  edad;
    cout << "Diga su género" << endl;
    cout << " 1 = femenino y 2 = masculino" << endl;
    cin >> género;
    if (género == 2 & edad >= 18)
    {
        cout << "Eres un hombre adulto";
    } else
        if (género == 1 & edad >= 18)
        {
            cout << "Eres una mujer adulta" << endl;
        } else
            cout << "Eres menor de edad" << endl;
    return 0;
}
