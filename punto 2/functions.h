#pragma once
#include "personajeFactory.h"


int generar_numero(int min, int max);
unique_ptr<Util> generarArmaRandom(bool esGuerrero);
shared_ptr<Personaje> generarPersonajeRandom(bool esGuerrero, pair<unique_ptr<Util>, unique_ptr<Util>> armas);
void generadorPersonajes(int n, bool esGuerrero, vector<shared_ptr<Personaje>>& personajes);
void mostrarArmasPersonajes(const vector<shared_ptr<Personaje>>& personajes);