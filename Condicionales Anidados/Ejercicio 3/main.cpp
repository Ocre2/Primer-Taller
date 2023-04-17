#include <iostream>
using namespace std;
int main() {
    int salario;
    cout << "Digite su saliro mensual" << endl;
    cin >> salario;
    if (salario < 10000)
    {
        cout << "No debe pagar impuestos" << endl;
    }else
        if (salario >= 10000 & salario < 20000)
        {
            cout << "Debe pagar 5% de impuestos " << endl;
        } else
            if (salario >= 20000 & salario < 30000)
            {
                cout << "Debe pagar 10% de impuestos" << endl;
            } else
                if (salario >= 30000)
                {
                    cout << "Debe pagar 15% de impuestos" << endl;
                }
    return 0;
}
