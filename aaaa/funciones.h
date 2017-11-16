#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int idLaboratorio;//PK
    char razonSocial[25];
    char direccion[50];
    char telefono[20];
} eLaboratorio;

typedef struct
{
    int idMedicamento;//PK
    char descripcion[50];
    float precio;
    int idLaboratorio;//FK
    int stock;
    eFecha fechaElaboracion;
    eFecha fechaVencimiento;
} eMedicamento;

typedef struct
{
    int idCliente;//
    char nombre[50];
    int idMedicamento;//FK
} eCliente;

void inicializarLaboratorios(eLaboratorio[], int);
void inicializarMedicamentos(eMedicamento[], int);
void inicializarClientes(eCliente[], int);
void mostrarMedicamentos(eMedicamento medicamentos[], int sizeMed);
void mostrarClientes(eCliente clientes[], int sizeCli, eMedicamento medicamentos[], int sizeMed);
void mostrarParticular(eCliente clientes[], int sizeCli, eMedicamento medicamentos[], int sizeMed);

