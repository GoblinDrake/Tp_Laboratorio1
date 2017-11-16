#include "funciones.h"

void inicializarLaboratorios(eLaboratorio laboratorios[], int sizeLab)
{
    int id[]= {1,2,3};
    char razon[][30]= {"Roemers","Bago","Bayer"};
    char direccion[][30]= {"mitre 750","Belgrano 788","Sarmiento 1258"};
    char telefono[][30]= {"12345","678910","1112131415"};
    int i;

    for(i=0; i<sizeLab; i++)
    {
        laboratorios[i].idLaboratorio=id[i];
        strcpy(laboratorios[i].razonSocial, razon);
        strcpy(laboratorios[i].direccion, direccion);
        strcpy(laboratorios[i].telefono, telefono);
    }
}

void inicializarMedicamentos(eMedicamento medicamentos[], int sizeMed)
{

    int id[]= {100,101,102,103,104};
    char descripcion[][30]= {"Ibuprofeno","Tafirol","Diclofenac","Bayaspirina", "Mejoralito"};
    float precio[]= {60,85,105,15,28};
    int laboratorio[]= {1,1,2,3,3,1};
    int stock[]= {3,2,3,10,0};
    eFecha elaboracion[]= {{22,9,2017},{15,2,2016},{10,6,2016},{22,9,2017},{5,10,2000}};
    eFecha vencimiento[]= {{22,9,2030},{5,12,2017},{30,8,2019},{3,12,2020},{12,8,2005}};
    int i;

    for(i=0; i<sizeMed; i++)
    {
        medicamentos[i].idMedicamento=id[i];
        strcpy(medicamentos[i].descripcion, descripcion[i]);
        medicamentos[i].precio = precio[i];
        medicamentos[i].idLaboratorio=laboratorio[i];
        medicamentos[i].stock = stock[i];
        medicamentos[i].fechaElaboracion=elaboracion[i];
        medicamentos[i].fechaVencimiento=vencimiento[i];

    }
}
void inicializarClientes(eCliente clientes[], int sizeCli)
{

    int id[]= {111,222,333,444,555,666,777,888,999,101010};
    char nombre[][30]= {"Geronimo","Adalberto","Inocencia","Felipe","Lucrecia","Ermenegildo","Efigenia","Dora","Anastacia","Armando"};
    int medicamento[]= {104,100,101,101,101,102,103,101,101,100};
    int i;

    for(i=0; i<sizeCli; i++)
    {
        clientes[i].idCliente=id[i];
        strcpy(clientes[i].nombre, nombre[i]);
        clientes[i].idMedicamento=medicamento[i];
    }
}

void mostrarMedicamentos(eMedicamento medicamentos[], int sizeMed)
{
    int i;
    printf("ID\t%10s\tPRECIO\tLAB\tSTOCK\tF. ELAB\t\tF.VTO\n", "DESCRIPCION");
    for(i=0; i<sizeMed; i++)
    {
        printf("%d\t%10s\t%.2f\t%d\t%d\t%d/%d/%d\t%d/%d/%d\n", medicamentos[i].idMedicamento
               ,medicamentos[i].descripcion, medicamentos[i].precio, medicamentos[i].idLaboratorio
               ,medicamentos[i].stock, medicamentos[i].fechaElaboracion.dia, medicamentos[i].fechaElaboracion.mes
               ,medicamentos[i].fechaElaboracion.anio,medicamentos[i].fechaVencimiento.dia
               ,medicamentos[i].fechaVencimiento.mes,medicamentos[i].fechaVencimiento.anio);
    }

}
void mostrarClientes(eCliente clientes[], int sizeCli,eMedicamento medicamentos[], int sizeMed)
{
    int i;
    int j;
    printf("ID\t%10s\tMEDICAMENTO\n", "NOMBRE");
    for(i=0; i<sizeCli; i++)
    {
        printf("%d\t%10s\t %d\t  ", clientes[i].idCliente, clientes[i].nombre, clientes[i].idMedicamento);

        for(j=0; j<sizeMed; j++)
        {
            if(clientes[i].idMedicamento==medicamentos[j].idMedicamento)
            {
                printf("%s\n",medicamentos[j].descripcion);
                break;
            }

        }


    }
}
void mostrarParticular(eCliente clientes[], int sizeCli,eMedicamento medicamentos[], int sizeMed)
{
    int i;
    int j;
    printf("\nMEDICAMENTO \t NOMBRE\n");
    for(i=0; i<sizeMed; i++)
    {
        printf("\n%s:\t",medicamentos[i].descripcion);
        for(j=0; j<sizeCli; j++)
        {
            if(clientes[j].idMedicamento==medicamentos[i].idMedicamento)
            {
            printf("--%s--", clientes[j].nombre);
            }

        }

    }
}

