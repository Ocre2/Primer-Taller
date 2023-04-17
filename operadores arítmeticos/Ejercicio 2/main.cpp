#include <iostream>
using namespace std;
int main() {
    float producto;
    float impuesto;
    cout << "Digite el valor del producto"<<  endl;
    cin >>  producto;
    cout << "Digite el impuesto" << endl;
    cin >> impuesto;
    float impu = (producto*impuesto)/100+producto;
    cout << "El valor del producto con el impuesto es " << impu;
    return 0;
}
