#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class EntidadOrganizativa {
    private:
        string nombre;
        vector<vector<EntidadOrganizativa>> subentidades;

    public:
        //Constructor
        EntidadOrganizativa(const string& nombre);

        //Destructor 
        virtual ~EntidadOrganizativa() = default;
        
        //Getter
        virtual string get_nombre();

        //Metodos
        virtual void agregarSubentidad(shared_ptr<EntidadOrganizativa> nueva_entidad);
        virtual int contarSubentidades();

};

class Empleado{
    private:
        string nombre, puesto;
        int antiguedad;
        float salario;

    public:
        //Constructor
        Empleado(const string nombre, const string puesto, int antiguedad, float salario);

        //Getters
        int getAntiguedad();
        float getSalario();

        //Metodos
        bool updateSalario();
};

class Departamento;
class Empresa: public EntidadOrganizativa {
    private: 
        string direccion;
        vector<shared_ptr<Departamento>> departamentos;

    public:
        //Constructor
        Empresa(const string& nombre, const string& direccion);

        //Getters
        Departamento getDeptByName(string departamento);
        vector<shared_ptr<Departamento>> getDepNames();
};

class Manager: public Empleado {
    private:
        float bono;
        string level;
    
    public:
        //Constructor
        Manager(const string& nombre, const string& puesto, int antiguedad, float salario, float bono, const string& nivel);

        //Getter
        float getBono();

        //Setter
        bool setLevel(string level);

        //Metodo
        bool updateBono();
};

class CentralRegional: public EntidadOrganizativa {
    private:
        int cantEmpleados;
        vector<string> paises;
        vector<shared_ptr<EntidadOrganizativa>> gerentesAlto;
        vector<shared_ptr<EntidadOrganizativa>> gerentesMedio;
        vector<shared_ptr<Empresa>> empresas;

    public:
        //Constructor
        CentralRegional(const string& nombre);

        //Getters
        int getCantEmpleados();
        vector<shared_ptr<Empresa>> getEmpNames();
        vector<shared_ptr<EntidadOrganizativa>>  getGerentesAlto();
        vector<shared_ptr<EntidadOrganizativa>> getGerentesMedio();


};
