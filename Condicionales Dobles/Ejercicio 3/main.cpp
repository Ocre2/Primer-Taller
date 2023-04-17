#include <iostream>
using namespace std;
int main() {
    int edad;
    cout << "Digite su edad" << endl;
    cin >> edad;
    if (edad >= 18 & edad <= 65)
    {
        cout << "Eres un adulto" << endl;
    }else
        cout << "No eres un adulto" << endl;

    return 0;
}
