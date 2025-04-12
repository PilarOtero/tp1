#include "batalla.h"

int main(){

    cout << "------- BIENVENIDO -------" << endl;
    cout << "LA BATALLA HA COMENZADO" << endl;

    //JUGADOR 1
    int opcion = elegirPersonaje();
    shared_ptr<Util> armaj1 = elegirArma();
    shared_ptr<Personaje> jugador1 = PersonajeFactory:: crearPersonajeArmado(static_cast<Personajes>(opcion), {armaj1, nullptr});
    
    //RIVAL
    bool esGuerrero = generarEsGuerrero();
    shared_ptr<Util> armaj2 = armarival(esGuerrero);
    shared_ptr<Personaje> jugador2 = personajeRival(armaj2, esGuerrero);
    
    //Simulo la batalla
    simularBatalla(jugador1, armaj1, jugador2, armaj2);
}