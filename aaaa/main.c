#include "funciones.h"

#define LAB 3
#define MED 5
#define CLI 10

int main()
{
    eLaboratorio listaLaboratorios[LAB];
    eMedicamento listaMedicamentos[MED];
    eCliente listaClientes[CLI];


    inicializarLaboratorios(listaLaboratorios, LAB);
    inicializarMedicamentos(listaMedicamentos, MED);
    inicializarClientes(listaClientes, CLI);
    mostrarMedicamentos(listaMedicamentos, MED);
    printf("\n***************************************************\n");
    mostrarClientes(listaClientes, CLI,listaMedicamentos, MED);
    mostrarParticular(listaClientes, CLI,listaMedicamentos, MED);



    return 0;
}
