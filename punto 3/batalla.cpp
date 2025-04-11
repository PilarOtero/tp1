#include "batalla.h"
#include <iostream>

using namespace std;

void displayPersonajes(){
    cout << "------- PERSONAJES DISPONIBLES -------" << endl;
    cout << "PERSONAJES MAGICOS" << endl;
    cout << "1. Brujo" << endl;
    cout << "2. Conjurador" << endl;
    cout << "3. Hechicero" << endl;
    cout << "4. Nigromante" << endl;
    cout << "\nPERSONAJES GUERREROS" << endl;
    cout << "5. Gladiador" << endl;
    cout << "6. Paladin" << endl;
    cout << "7. Caballero" << endl;
    cout << "8. Barbaro" << endl;
    cout << "9. Mercenario" << endl;
    cout << "\n";
}

int elegirPersonaje(){
    int opcion;
    while(true){
        displayPersonajes();
        cout << "Elija un personaje (1-9): ";
        cin >> opcion;

        if (opcion <= 1 || opcion >= 9){
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue;
        }
    
        return opcion;
    }
}

void displayArmas(){
    cout << "------- ARMAS DISPONIBLES -------" << endl;
    cout << "ARMAS MAGICAS" << endl;
    cout << "1. Amuleto" << endl;
    cout << "2. Baston" << endl;
    cout << "3. Pocion" << endl;
    cout << "4. Libro de Hechizos" << endl;
    cout << "\nARMAS DE COMBATE" << endl;
    cout << "5. Espada" << endl;
    cout << "6. Garrote" << endl;
    cout << "7. Hacha Simple" << endl;
    cout << "8. Hacha Doble" << endl;
    cout << "9. Lanza" << endl;
}

shared_ptr<Util> elegirArma(){
    int opcion;
    while(true){
        displayArmas();
        cout << "Elija un arma (1-9): ";
        cin >> opcion;

        if (opcion <= 1 || opcion >= 9){
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue;
        }
        
        //Con la opcion elegida por el jugador, creo el arma en funcion del numero asignado en enum class Armas
        return PersonajeFactory:: crearArma(static_cast<Armas>(opcion));
    }
}

void displayAtaque(){
    cout << "Su opcion: (1) Golpe Fuerte, (2) Golpe Rapido, (3) Defensa y Golpe" << endl;
}

Ataque elegirAtaque(){
    int opcion;
    
    while(true){
        displayAtaque();
        cout << "Elija un ataque (1-3): ";
        cin >> opcion;

        if (opcion <= 1 || opcion >= 3){
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue;
        }
        
        //Casteo la opcion elegida al tipo Ataque
        return static_cast<Ataque>(opcion);
    }
}

//ATAQUE RIVAL -> aleatorio (reutilizo la funcion utilizada en Personaje Factory) y asi genero el tipo de ataque y el personaje rival
Ataque ataqueRival(){
    int opcion = generar_numero(1, 3);
    return static_cast<Ataque>(opcion);
}

shared_ptr<Personaje> personajeRival(){
    Personajes personaje = static_cast<Personajes>(generar_numero(1, 9));

    Armas arma = static_cast<Armas>(generar_numero(1, 9));
    shared_ptr<Util> armaRival = PersonajeFactory:: crearArma(static_cast<Armas>(arma));

    shared_ptr<Personaje> rival = PersonajeFactory:: crearPersonajeArmado(personaje, {armaRival, nullptr}); //se utiliza una sola arma
    return rival;
}




    