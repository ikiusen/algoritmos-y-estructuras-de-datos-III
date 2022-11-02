#include <iostream>
#include <Company.h>

int main()
{
    Company company;
    std::shared_ptr<Client> p1 = std::make_shared<Client>("Thiago", "Cabrera", std::make_shared<Vehicle>("Peugeot 404", "1987"));
    std::shared_ptr<Client> p2 = std::make_shared<Client>("Jose", "Perez", std::make_shared<Vehicle>("Renault 12", "1996"));

    std::cout << "Bienvenido a taller neumatico!" << std::endl;
    std::cout << "Estos son nuestros servicios: " << std::endl;
    company.showServices();

    
    std::cout << "Creando fichas de atencion.." << std::endl;
    company.recieveClient(p1, 0);
    company.recieveClient(p2, 2);

    std::cout << "Atendiendo clientes..." << std::endl;
    company.attend();
}