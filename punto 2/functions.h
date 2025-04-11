#pragma once
#include "personajeFactory.h"


int generar_numero(int min, int max);
shared_ptr<Util> generarArmaRandom(bool esGuerrero);
shared_ptr<Personaje> generarPersonajeRandom(bool esGuerrero, pair<shared_ptr<Util>, shared_ptr<Util>> armas);
void generadorPersonajes(int n, bool esGuerrero, vector<shared_ptr<Personaje>>& personajes);
void mostrarArmasPersonajes(const vector<shared_ptr<Personaje>>& personajes);