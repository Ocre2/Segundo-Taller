#include <iostream>
using namespace std;
int main() {
    int vector[2];
    string cedula;
    bool cedula_mala;
    char dia_semana;

    for (int i = 0; i < 2; i++)
    {
        cedula_mala = true;

        cout << "Diga su numero de cedula " << i+1 <<  endl;
        cin >> cedula;
        int longitud = cedula.size();
        do {
            if ( longitud >= 8 && longitud <= 11)
            {
                cedula_mala = false;
            } else
                {
                    cout << "Digite la cedula correcta" << endl;
                    cin >> cedula;
                    longitud = cedula.size();
                }
            cout << "Diga que dia es hoy  1(lunes) 2(martes) 3(miercoles) 4(jueves) 5(viernes) 6(sabado) 7,8,9 y 0(domingo)" << endl;
            cin >> dia_semana;
            if(cedula [longitud -1] == dia_semana)
            {
                cout << "Usted puede vacunarse hoy" << endl;
            } else
                {
                    cout << "No puede vacunarse hoy" << endl;
                }
        } while (cedula_mala);
    }
    return 0;
}
