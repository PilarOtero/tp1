#pragma once
#include "utils.h"

class Amuleto: public ItemMagico {
    private:
        bool traeSuerte;
    public:
        //Constructor
        Amuleto(const string& nombre, const string& poder, int daño, int nivel_de_uso, int duracion, bool magiaActiva, bool traeSuerte);

        //Metodos
        void mostrarInfo() override;
        void mostrarSuerte();
};