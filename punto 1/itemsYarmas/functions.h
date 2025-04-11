#pragma once
#include <memory>
#include "amuleto.h"
#include "baston.h"
#include "pocion.h"
#include "libroDeHechizos.h"
#include "lanza.h"
#include "hachaDoble.h"
#include "hachaSimple.h"
#include "espada.h"
#include "garrote.h"
#include "utils.h"

void handle_mostrar_items(shared_ptr<Baston> baston, shared_ptr<LibroDeHechizos> libro, shared_ptr<Pocion> pocion, shared_ptr<Amuleto> amuleto);
void handle_mostrar_armas(shared_ptr<HachaSimple> hacha_simple, shared_ptr<HachaDoble> hacha_doble, shared_ptr<Lanza> lanza, shared_ptr<Espada> espada, shared_ptr<Garrote> garrote);
void test_evolucionar_item(shared_ptr<Baston> baston);
void test_involucionar_item(shared_ptr<LibroDeHechizos> libro);
void test_romper_item(shared_ptr<Pocion> pocion);
void test_ver_ma_pocion(shared_ptr<Pocion> pocion);
void test_evolucionar_arma(shared_ptr<HachaSimple> hacha_simple);
void test_ver_peso_arma(shared_ptr<Espada> espada);
void test_involucionar_garrote(shared_ptr<Garrote> garrote);
void test_reparar_garrote(shared_ptr<Garrote> garrote);
void test_espada_cortante(shared_ptr<Espada> espada);
void test_pocion_magica(shared_ptr<Pocion> pocion);
void test_filo_espada(shared_ptr<Espada> espada);