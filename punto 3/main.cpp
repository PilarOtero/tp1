#include "batalla.h"

int main(){

    cout << "------- BIENVENIDO -------" << endl;
    cout << "LA BATALLA HA COMENZADO" << endl;

    //JUGADOR 1
    int opcion = elegirPersonaje();
    unique_ptr<Util> armaj1 = elegirArma();
    shared_ptr<Personaje> jugador1 = PersonajeFactory:: crearPersonajeArmado(static_cast<Personajes>(opcion), {move(armaj1), nullptr});
    
    //RIVAL
    bool esGuerrero = generarEsGuerrero();
    unique_ptr<Util> armaj2 = armarival(esGuerrero);
    shared_ptr<Personaje> jugador2 = personajeRival(move(armaj2), esGuerrero);
    
    //Simulo la batalla
    simularBatalla(jugador1, move(armaj1), jugador2, move(armaj2));
}