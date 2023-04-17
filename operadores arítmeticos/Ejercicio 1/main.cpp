#include <iostream>
using namespace std;
int main() {
    int descuento;
    int valor_producto;
    float valor_descuento;
    float valor_total;

     cout << "Diga el precio del producto" << endl;
     cin >> valor_producto;
     cout << "Diga el porcentaje del descuento" << endl;
     cin >> descuento;

     valor_descuento = (valor_producto * descuento)/100;
     valor_total = valor_producto - valor_descuento;

     cout << "El valor del prducto con el descuendo aplicado es : " << valor_total;
     return 0;
}
