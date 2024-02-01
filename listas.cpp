/*************** MANEJO DINAMICO DE LISTAS *************** /
/********** Menu Base de listas *********/
#include <stdio.h>
#include <stdlib.h>
/* estructura vista en clase */
struct lista{
int valor;
lista *prx;};

/* rutinas para manejo de listas */
void insertar( lista **p, int x);
void mostrar ( lista *d, int N);
void eliminar ( lista **p, int x);
void ordenar_S( lista **p);
void Eliminar_MDDDP( lista **p);

int main()
{
int op = -1, x=0, N=0;
lista *p=NULL;
while ( op )
{
system("cls");
printf( "\n\n\t\tMENU DE MANEJO DE LISTAS \n\n\t ");
printf( "1.\tInsertar por comienzo de lista\n\t ");
printf( "2.\tEliminar dato\n\t ");
printf( "3.\tMostrar lista\n\t ");
printf( "4.\tOrdenar lista\n\t ");
printf( "0.\tSALIR del sistema\n\n\t ");
scanf("%i", &op);

switch (op)
{
case 1:
printf("\n\n\tIndique dato a Insertar ");
scanf_s( "%i", &x);
N++;
insertar (&p, x);
break;
case 2:
printf("\n\n\tIndique dato a Eliminar ");
scanf_s( "%i", &x);
eliminar (&p, x);
break;
case 3:
mostrar(p,N);
break;
case 4:
ordenar_S( &p);
break;
}

system("pause");
};
}/* FIN de Menu Base de Listas */

void insertar( lista **p, int x)
{/* inserta x por el comienzo de la lista p */
lista *t = new lista;
t->valor = x;
t->prx = *p;
*p = t;
}

void mostrar ( lista *d,int N)
{/* muestra por pantalla la lista enlazada */
lista *t = d;
system("cls");
printf("\n\n Mostrar lista: ");
printf("\n\n lista de %d elementos \n\n ", N);
while ( t)
{
printf("->[%i]", t->valor);
t= t->prx;
};
printf("->NULL\n\n");
}

void eliminar ( lista **p, int x)
{/* elimina la primera ocurrencia del valor x en la lista p */
lista *t=*p;
if (t)
if (t->valor==x)
{
*p=(*p)->prx;
delete( t);
}
else
{
while ((t->prx)&&(t->prx->valor != x)) t=t->prx;
if (t->prx)
{
lista *aux= t->prx;
t->prx = t->prx->prx;
delete( aux );
}
}
}

void ordenar_S( lista **p)
{/* ordenar los elementos por selecion */
lista *x=*p,*y,*z;
int min;
while ( (x) && (x->prx) )
{
min=x->valor;
y=x->prx;
while(y)
{
if (y->valor < min)
{
min=y->valor;
z=y;
}
y=y->prx;
}
if ( min != (x->valor) )
{
z->valor=x->valor;
x->valor= min;
}
x=x->prx;
}
}

void Eliminar_MDDDP( lista **p)
{ /* elimina valores con dos o mas digitos pares */
lista *X=*p; int y,z,cont;
while (X->prx)
{
if (X->valor >21)
{
z=X->valor;

}
else
X=X->prx;
}

}
