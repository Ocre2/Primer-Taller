#include <iostream>
using namespace std;
int main() {
    int Nota;
    cout << "Digite la nota del estudiante" << endl;
    cin >> Nota;
    if (Nota >= 6)
    {
        cout << "El estudiante aprobó el examen" << endl;
    }
    else
        cout << "El estudiante reprobó el examen" << endl;
    return 0;
}
