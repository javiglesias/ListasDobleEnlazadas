#include "TAD.h"

int main(void)
{
    int eleccion = 0;
    pasajeros lista = NULL;
    char nombre[20], apellido1[20], apellido2[20], destino[6];
    while(eleccion != 6)
    {
        printf("\n");
        printf("\t1%cAniadir nuevo pasajero\n",16);
        printf("\t2%cEliminar pasajeros\n",16);
        printf("\t3%cBuscar pasajero\n",16);
        printf("\t4%cVaciar Lista de pasajero\n",16);
        printf("\t5%cMostrar todos los pasajeros\n",16);
        printf("\t6%cSALIR\n",16);
        printf("\t%cEleccion: ",175);
        scanf("%i",&eleccion);
        printf("\n");
        switch(eleccion)
        {
            case 1:
                    printf("Nombre: ");
                    scanf("%s",&nombre);
                    printf("Apellido 1: ");
                    scanf("%s",&apellido1);
                    printf("Apellido 2: ");
                    scanf("%s",&apellido2);
                    printf("Destino(Madrid,Malaga): ");
                    scanf("%s",&destino);
                    if((addPasajeros(lista, nombre,apellido1,apellido2,destino,0)) == -1)
                    {
                        printf("Error al aniadir un pasajero.\n");
                        break;
                    }
                    else
                    {
                        printf("Pasajero aniadido correctamente.\n");
                        break;
                    }
            case 2:
                    printf("EN CONSTRUCCION....\n");
                    break;
            case 3:
                    printf("EN CONSTRUCCION....\n");
                    break;
            case 4:
                    printf("EN CONSTRUCCION....\n");
                    break;
            case 5:
                    mostrarPasajeros(lista);
                    break;
            case 6:
                    break;
            default:
                printf("Eleccion erronea, cerrando programa....\n");
        }
    }
    return 0;
}
