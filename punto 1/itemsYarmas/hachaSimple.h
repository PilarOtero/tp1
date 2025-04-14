#pragma once

#include "utils.h"

class HachaSimple: public ArmaCombate {
    private:
        bool afilada;
    
    public:
        //Constructor
        HachaSimple(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool afilada);

        //Getter
        bool getAfilada();
    
        //Métodos
        void usar() override;
        void reparar(int daño_agregado, int duracion_agregada) override;
        void mostrarInfo() override;
};