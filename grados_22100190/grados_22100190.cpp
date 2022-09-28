#include <iostream>

using namespace std;

int main() {
    int restart = 1;
        int gradosc, gradosk, gradosf, gradosr;
        cout << "Introduce grados en celcius (C)";
        cin >> gradosc;

        if (gradosc -= -250) {
            cout << "El valor es menor de -250 grados\n";
            cout << "Escribe un valor correcto";
        }
        else {
            gradosk = gradosc + 273.15;
            gradosf = gradosc * 9 / 5 + 32;
            gradosr = (1.8 * gradosc) + 491.67;
            cout << "Equivalen a:" << gradosk << "Kelvin \n";
            cout << "Equivalen a:" << gradosf << " Fahrenheit\n";
            cout << "Equivalen a:" << gradosr << "Rankine\n";
        }
}
