#include <iostream>

using namespace std;

int main() {
    int n = 50;
    int respuestas[n];
    int sum = 0;
    int promedio;
    int countCero = 0, countUno = 0, countDos = 0, countTres = 0;

    cout << "Por favor, ingrese el nivel de satisfaccion de cada cliente 0(muy insatisfecho) , 1(insatisfecho), 2(satisfecho) o 3(muy satisfecho):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Cliente " << (i + 1) << ": ";
        cin >> respuestas[i];
        sum += respuestas[i];

        if (respuestas[i] == 0) {
            countCero++;
        } else if (respuestas[i] == 1) {
            countUno++;
        } else if (respuestas[i] == 2) {
            countDos++;
        } else if (respuestas[i] == 3) {
            countTres++;
        }
    }

    promedio = (sum + n - 1) / n;
    cout << "Porcentaje de nivel de satisfaccion:" << endl;
    cout << "Cero (muy insatisfecho): " << (countCero * 100) / n << "%" << endl;
    cout << "Uno (insatisfecho): " << (countUno * 100) / n << "%" << endl;
    cout << "Dos (satisfecho): " << (countDos * 100) / n << "%" << endl;
    cout << "Tres (muy satisfecho): " << (countTres * 100) / n << "%" << endl;

    cout << "Grado de satisfaccion global: ";
    if (promedio == 0) {
        cout << "Muy insatisfecho" << endl;
    } else if (promedio == 1) {
        cout << "Insatisfecho" << endl;
    } else if (promedio == 2) {
        cout << "Satisfecho" << endl;
    } else if (promedio == 3) {
        cout << "Muy satisfecho" << endl;
    }

    return 0;
}
