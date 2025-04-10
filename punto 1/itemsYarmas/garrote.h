#pragma once

#include "utils.h"

class Garrote: public ArmaCombate {
    private:
        bool destruye_armas = true;
    
    public:
        //Constructor
        Garrote(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, bool destruye_armas);
        
        //Getters
        bool getDestruyeArmas();
    
        //Metodos
        void usar() override;
        void reparar(int daño_agregado, int duracion_agregada);
        void mostrarInfo() override;
};