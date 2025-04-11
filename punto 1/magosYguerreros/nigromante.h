#include "utils2.h"

class Nigromante: public Mago {
    private:
        int absorcionDeVida;
        int energiaMuerte;
    
    public:
        //Constructor
        Nigromante(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, int absorcionVida, int energiaMuerte);
    
        //Getters
        int getAbsorcionDeVida();
        int getEnergiaMuerte();

        //Metodos
        void mostrarInfo() override;
        //Metodo para absorber energia de la Muerte (capacidad de los nigromantes)
        void absorberEnergia();
};