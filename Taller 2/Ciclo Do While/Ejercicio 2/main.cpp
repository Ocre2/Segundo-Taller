#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(0));  // Inicializar la semilla de números aleatorios
    int random_num = rand() % 20 + 1;  // Generar un número aleatorio entre 1 y 20
    int num_attempts = 0;
    int guess;

    while (num_attempts < 11) {
        cout << "Intento #" << num_attempts + 1 << ": Ingrese un número entre 1 y 20: ";
        cin >> guess;

        if (guess == random_num) {
            cout << "Felicitaciones, adivinaste el número!" << endl;
            break;
        } else {
            cout << "Mala suerte, sigue intentando." << endl;
            num_attempts++;
            random_num = rand() % 20 + 1;  // Cambiar el número aleatorio para el siguiente intento
        }
    }

    if (num_attempts == 11) {
        std::cout << "Lo siento, fallaste 11 veces. Game Over." << std::endl;
    }

    return 0;
}

