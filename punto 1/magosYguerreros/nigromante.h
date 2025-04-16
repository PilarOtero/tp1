#include "utils2.h"

class Nigromante: public Mago {
    private:
        int absorcionDeVida;
        int energiaMuerte;
    
    public:
        //Constructor
        Nigromante(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<unique_ptr<Util>, unique_ptr<Util>> armas, int absorcionVida, int energiaMuerte);
    
        //Getter
        int getEnergiaMuerte();

        //Métodos
        void mostrarInfo() override;
        //Método para absorber energía de la Muerte (capacidad de los nigromantes)
        void absorberEnergia();
};