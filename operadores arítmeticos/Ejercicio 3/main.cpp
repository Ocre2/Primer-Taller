#include <iostream>
using namespace std;

int main(){
    float Prestamo;
    float InteresAnual;
    float Plazo_a_meses;
    float InteresMensual;
    float Valor_Prestamo;
    float Valor_Cuota_Mensual;

    cout <<"Digite el valor del prestamo"<< endl;
    cin >> Prestamo;
    cout <<"Digite el interess anual"<< endl;
    cin >> InteresAnual;
    cout <<"Digite el plazo en meses"<< endl;
    cin >> Plazo_a_meses;

    Valor_Prestamo = Prestamo + (Prestamo*InteresAnual)/100;
    Valor_Cuota_Mensual = Valor_Prestamo/Plazo_a_meses;

    cout <<"A un plazo mensual de "<< Plazo_a_meses << " usted debe pagar una cuota mensual con una valor de : "<< Valor_Cuota_Mensual;


    return 0;
}
