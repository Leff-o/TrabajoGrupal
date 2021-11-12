#include <stdio.h>

int main() {
    char cadena[200];
    int op, cont;

    do {
        printf("\n_____Menu_____\n1.Convertir en nombre Propio el contenido del a cadena.\n2.Contar el numero de veces que existe una palabra en una cadena.\n3.Enctriptar cadena.\n4.Desencriptar.\n5.Llenar caracteres por Izquierda o por derecha.\n6.Borrar caracteres de una cadena.\n7.Interseccion.\n8.Diferencia entre dos cadenas.\n9.Borrar caracteres Izquierda o Derecha.\n10.Validar correo electronico.\n11.Salir\n>>");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Convertir en nomre propio");
                break;
            case 2:
                printf("Buscar y contar palabras en cadena");
                break;
            case 3:
                printf("Contar Vocales");
                break;
            case 4:
                printf("Año nuevo");
                break;
            case 5:
                printf("Llenar caracteres por izquierda o derecha");
                break;
            case 6:
                printf("Borrar caracteres");
                break;
            case 7:
                printf("Intersección");
                break;
            case 8:
                printf("Eliminar repetidos");
                break;
            case 9:
                printf("Contar palabras");
                break;
            case 10:
                printf("Validar correo");
                break;
            case 11:
                printf("BYE BYE");
                break;
        }
    }while(op!=11);
}