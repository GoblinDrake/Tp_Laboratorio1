#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    char edad[3];
    int estado;
    int edadDeI;
    int dni;
    char dniC[9];

}EPersona;


int iniciarCantidad(char variable[]);
int iniciarLetra(char variable[]);
int identificarNumero(char dato[]);
int charXint(char variable[]);
void inicializar(EPersona Persona[], int );
void CargarP(EPersona Persona[], int );
void ElimP(EPersona Persona[], int );
void listarPersona(EPersona Persona[], int );

int buscarPorDni(EPersona Persona[], int dni, int );

#endif // FUNCIONES_H_INCLUDED
