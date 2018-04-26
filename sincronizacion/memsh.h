/* universidad de los andes
 * sincronizacion de procesos
 * asignatura: sistemas operativos
 * autor: alvaro araujo
 * fecha: 20/04/2018
 */

#define ID 999
#define ROUTE "/bin/lspci"
<<<<<<< HEAD
#define SEM_ID 0x000000
=======
#define SEM_ID 0x123456
>>>>>>> 489a1666eab16cc6bbb647a4d8a7282b8c72d7c2

typedef struct
{
  pid_t pid;
  long long numero;
  unsigned char termino;
}inf_p;

typedef struct{
  pid_t pid_mon;
<<<<<<< HEAD
	inf_p array_p[30];
=======
	inf_p array_p[20];
>>>>>>> 489a1666eab16cc6bbb647a4d8a7282b8c72d7c2
}shmem_data;
