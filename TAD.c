#include "TAD.h"

/*
	EN ESTE FICHERO LO PRIMERO QUE DEFINIMOS SERA EL TIPO ABSTRACTO DE DATOS
	"PASAJERO" QUE SERA CADA UNA DE LAS CELDAS DE LA LISTA ENLAZADA EN LA QUE
	INSERTAREMOS, ELIMINAREMOS Y MODIFICAREMOS LOS USUARIOS.
*/

/*
	UNA VEZ QUE TENEMOS DEFINIDO EL MODELO QUE VA A SEGUIR LA INFORMACION
	QUE TENDREMOS ALMACENADA EN NUESTRA LISTA ENLAZADA, TOCA REALIZAR
	LAS FUNCIONES QUE LLAMAREMOS PARA REALIZAR LAS OPERACIONES CON
	LAS LISTAS DE PASAJEROS.
	COMO VAMOS A TRABAJAR TODO EL RATO CON LISTAS ENLAZADAS, EN LA MYORIA DE LAS
	FUNCIONES, EL PARAMETROS QUE SE RECIBIRÁ SERA UNA LISTA ENLAZADA,
	Y SEGURAMENTE SE DEVOLVERA OTRA LISTA O SE CAMBIARA LA QUE TENEMOS EN MEMORIA.
*/

/*
	EMPECEMOS CON LA PRIMERA FUNCIONALIDAD DE NUESTRA APLICACION:
	AÑADIR PASAJEROS.
	>
	<
*/

int addPasajeros(pasajeros *lista, char _nombre[], char _apellido1[],
				char _apellido2[], char _destino[], int _statusPago)
{
    pasajeros *aux;
//SI EL PUNTERO A LA LISTA ES NULL SIGNIFICA QUE LA LISTA ESTÁ VACIA Y ESTE ES  EL PRIMER NODO
		if(lista == NULL)
        {
            aux =(pasajeros *)malloc(sizeof(pasajeros));
            if(aux == NULL)
            {
                printf("ERROR");
                return -1;
            }
            else
            {
                lista = aux;
                lista->statusPago = 1;

            }
        }
        else
//SIGNIFICA QUE LA LISTA AL MENOS TIENE 1 NODO CREADO.
        {

        }

	return 0;
}
int eliminarPasajeros()
{
    return 0;
}
int buscarPasajero()
{
    return 0;
}
int vaciarLista()
{
    return 0;
}
void mostrarPasajeros(pasajeros *lista)
{
     printf("%d",lista->statusPago);
}

/*
	LA LEYENDA DE ERRORES QUE ESTABLEZCO ES LA SIGUIETE:
		-1: ERROR EN LA FUNCION
		 0: TODO CORRECTO
*/
