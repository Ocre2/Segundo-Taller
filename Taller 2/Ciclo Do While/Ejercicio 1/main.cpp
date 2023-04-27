#include <iostream>
#include <string>
using namespace std;
int main() {
    string username = "Lord3van";
    string password = "Nikki69";
    string input_username, input_password;

    do {
        cout << "Ingrese su usuario: ";
        cin >> input_username;
        cout << "Ingrese su contraseña: ";
        cin >> input_password;

        if (username == input_username && password == input_password) {
            cout << "Bienvenido, " << username << endl;
            break;
        } else {
            cout << "Usuario o contraseña incorrecta" << endl;
        }
    } while (true);

    return 0;
}
