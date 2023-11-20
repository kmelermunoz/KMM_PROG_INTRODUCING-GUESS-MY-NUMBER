#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicialització per a la generació de nombres aleatoris
    srand(time(0));

    // Generació d'un nombre aleatori entre 1 i 100
    int numeroAleatori = rand() % 100 + 1;

    // Declaració de variables
    int suposicio;
    int intents = 0;

    // Missatge de benvinguda al joc
    cout << "Benvingut al joc d'encertar el numero entre 1 i 100!" << endl;

    do {
        // Demanar a l'usuari que introdueixi la seva suposició
        cout << "Introdueix la teva suposicio: ";
        cin >> suposicio;

        // Verificar si la suposició és correcta, massa alta o massa baixa
        if (suposicio < numeroAleatori) {
            cout << "Massa baix! Torna-ho a provar." << endl;
        }
        else if (suposicio > numeroAleatori) {
            cout << "Massa alt! Torna-ho a provar." << endl;
        }

        // Incrementar el comptador d'intents
        intents++;

    } while (suposicio != numeroAleatori);

    // Missatge de felicitacions en endevinar el número
    cout << "Felicitats! Has encertat el numero en " << intents << " intents." << endl;

    return 0;
}

