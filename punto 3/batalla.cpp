#include "batalla.h"
#include <iostream>

using namespace std;

//(Podria obviar esta funcion)
bool generarEsGuerrero(){
    int n = generar_numero(0,1);
    if (n == 0) return false;
    if (n == 1) return true;
    return false;
}

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

string toStringAtaque(Ataque ataque){
    switch(ataque){
        case Ataque:: golpefuerte: return "Golpe Fuerte";
        case Ataque:: golperapido: return "Golpe Rapido";
        case Ataque:: defensaygolpe: return "Defensa y Golpe";
        default: return "Ataque no valido";
    }
}

Ataque elegirAtaque(){
    int opcion;
    
    while(true){
        displayAtaque();
        cout << "Elija un ataque (1-3): ";
        cin >> opcion;

        if (opcion < 1 || opcion > 3){
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue;
        }
        
        //Casteo la opcion elegida al tipo Ataque
        return static_cast<Ataque>(opcion);
    }
}

//ATAQUE RIVAL -> aleatorio (reutilizo la funcion utilizada en Personaje Factory) y asi genero el tipo de ataque y el personaje rival
Ataque ataqueRival(){
    return static_cast<Ataque>(generar_numero(1, 3));
}

shared_ptr<Util> armarival(bool esGuerrero){
    return generarArmaRandom(esGuerrero);
}

shared_ptr<Personaje> personajeRival(shared_ptr<Util> armaj2, bool esGuerrero){
    return generarPersonajeRandom(esGuerrero, {armaj2, nullptr});  
}

void simularBatalla(shared_ptr<Personaje> jugador1, shared_ptr<Util> armaj1, shared_ptr<Personaje> jugador2, shared_ptr<Util> armaj2){
    int hp1 = 100;
    int hp2 = 100;
    int ronda = 1;
    
    while (hp1 >= 0 && hp2 >= 0){
        //Seleccion del ataque por parte del jugador 1 (por consola)
        displayAtaque();
        Ataque ataquej1 = elegirAtaque();

        //Ataque rival
        Ataque ataquej2 = ataqueRival();

        cout << "===== RONDA " << ronda << " ====" << endl;
        cout << "El " << jugador1->getNombre() << " tiene " << hp1 << "HP\nEl " << jugador2->getNombre() << " tiene " << hp2 << " HP" << endl;

        if (ataquej2 == ataquej1){
            cout << "¡Ambos han elegido " << toStringAtaque(ataquej1) << "!" << endl;
            cout << "EMPATE" << endl;
            cout << "Siguiente turno..." << endl;
        }
        else if ((ataquej1 == Ataque:: golpefuerte && ataquej2 == Ataque:: golperapido) || 
                 (ataquej1 == Ataque:: golperapido && ataquej2 == Ataque:: defensaygolpe) ||
                 (ataquej1 == Ataque:: defensaygolpe && ataquej2 == Ataque:: golpefuerte)){
            
            cout << "El " << jugador1->getNombre() << "ataca con " << armaj1->getNombre() << "y hace 10 puntos de daño " <<endl;
            cout << "¡Has ganado el turno!" << endl;
            hp2 -= 10; 
        }
        else{
            cout << "El " << jugador2->getNombre() << "ataca con " << armaj2->getNombre() << "y hace 10 puntos de daño " <<endl;
            cout << "¡Has perdido el turno!" << endl;
            hp1 -=10;
        }
    ronda ++;  
    }

    cout << "-------- FIN DE LA BATALLA --------" << endl;
    if (hp2 <= 0){
        cout << "El " << jugador1->getNombre() << " ha salido victorioso" << endl;
    }
    else {
        cout << "El " << jugador2->getNombre() << " ha salido victorioso" << endl;
    }
}






    