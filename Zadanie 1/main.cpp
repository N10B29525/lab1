#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    float a, b, c;


    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Podaj trzecia liczbe: ";
    cin >> c;

    cout << endl;
    cout << endl;


    int najmniejsza, najwieksza;

    najwieksza = a;
    najmniejsza = a;



    if (b > najwieksza)
            najwieksza =b;

    if (c > najwieksza)
            najwieksza =c;

    if (b < najmniejsza)
            najmniejsza =b;

    if (c < najmniejsza)
            najmniejsza =c;


    cout << "Najwieksza liczba: " << najwieksza << std::endl;
    cout << endl;
    cout << "Najmniejsza liczba: " << najmniejsza << std::endl;
    cout << endl;
    cout << "Obliczam sume liczb: " << a + b + c << std::endl;
    cout << endl;

    int jeden, dwa, trzy;


    jeden = najmniejsza;

    trzy = najwieksza;


    if (a != najwieksza && a != najmniejsza)
        dwa = a;



    else if (b != najwieksza && b != najmniejsza)
        dwa = b;


    else
        dwa = c;



    cout << "Liczby rosnaco: " << jeden << ", " << dwa << ", " << trzy <<std::endl;
    cout << endl;
    cout << endl;
    return 0;
}
