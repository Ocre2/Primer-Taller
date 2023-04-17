#include <iostream>
using namespace std;
int main() {
    char  l;
    cout <<"Digite una letra"<< endl;
    cin >> l;
    if (l=='a'|| l=='e' || l=='i' || l=='o' || l=='u')
        {
            cout<<"La letra es una vocal"<< endl;
        }
    else
        cout <<"La letra es una consonante"<< endl;
    return 0;
}
