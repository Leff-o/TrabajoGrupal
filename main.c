#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int buscarCadena(char* cadena, char* buscar){
    printf("%s", cadena);
    printf("%s", buscar);
    int cont = 0;
    for(size_t i = 0; cadena [i] != '\0'; i++){
        int cont2 = 0;
        for (size_t j = 0; buscar[j] != '\0'; j++) {
            if (tolower(cadena [ i + cont2]) == tolower(buscar[j])){
                cont2++;
                if(cont2 == (strlen(buscar)-1)){
                    cont++;
                }
            }
        }
    }
    return cont;
}

int borrarCaracteres(char* cadena, char* borrar){
    int indiceCadena = 0, indiceCadenaLimpia = 0;
    int deberiaAgregarCaracter = 1;

    while (cadena[indiceCadena]){
        deberiaAgregarCaracter = 1;
        int indiceCaracteres = 0;
        while(borrar[indiceCaracteres]){
            if (cadena[indiceCadena] == borrar[indiceCaracteres]){
                deberiaAgregarCaracter = 0;
            }
            indiceCaracteres++;
        }
        if(deberiaAgregarCaracter){
            cadena[indiceCadenaLimpia] = cadena[indiceCadena];
            indiceCadenaLimpia++;
        }
        indiceCadena++;
    }
    cadena[indiceCadenaLimpia] = 0;
}
int llenarCaracteres(char cadena[], char caracter[], int cant, int op){
    if (op == 1){
        for (int i = 0; i < cant; i++) {
            strcat(cadena,caracter);
        }
        printf("cadena: %s\n", cadena);

    }if (op == 2){
        for (int i = 0; i < cant; i++) {
            strcat(cadena,caracter);
        }
        printf("cadena: %s\n", caracter);
    }
}
//------------------------------------------------------------------------------------
int main() {
    char cadena[200];
    char *p;
    char *tok;
    char *next_tok1;
    int op, cont;

    do {
        printf("\n_____Menu_____\n1.Convertir en nombre Propio el contenido del a cadena.\n2.Contar el numero de veces que existe una palabra en una cadena.\n3.Contar Vocales.\n4.Año nuevo.\n5.Llenar caracteres por Izquierda o por derecha.\n6.Borrar caracteres de una cadena.\n7.Interseccion.\n8.Eliminar repetidos.\n9.Borrar caracteres Izquierda o Derecha.\n10.Validar correo electronico.\n11.Salir\n>>");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Convertir en nomre propio");
                break;
            case 2:
                printf("Buscar cadena de caracteres\n");
                char buscar [200];

                fflush(stdin);
                printf("ingrese la cadena: ");
                fgets(&cadena, 200, stdin);
                printf("Ingrese la palabra que desea buscar: ");
                fflush(stdin);
                fgets(&buscar, 200, stdin);

                printf("El numero de veces que se repite la cadena es de %i veces\n", buscarCadena (cadena, buscar));
                break;
            case 3:

                printf("Contar Vocales");
                int vocales=0;
                int aux=0;
                printf("ingrese la cadena");
                gets(cadena);
                gets(cadena);

                for (int indice = 0; cadena[indice]  != '\0'; indice++){

                    // Así no importa si ponen 'A' o 'a', ambas letras serán convertidas a 'a'
                    char letraActual = tolower(cadena[indice]);

                    if (letraActual == 'a' ||letraActual == 'e' ||letraActual == 'i' ||letraActual == 'o' ||letraActual == 'u')
                    {
                      aux++;
                    }

                }
                printf("En la cadena digitada hay: %d  Vocales",aux);
                break;
            case 4:
                printf("ingrese la hora\n");
                int contReal=0,h=0,m=0,auxH=0;
                char dospuntos;
                scanf("%d" "%c" "%d",&h,&dospuntos,&m);

                //Condicional para "Cuenta regresiva"

                if(h>24 || h<0 || m>60 || m<0){
                    printf("La hora es erronea\n");
                    break;
                }if(h<=24 || m<=60){

                    auxH=24-h;
                  //  auxM=60-m;
                    contReal= (auxH*60)-m;
                }
                printf("Para que sea  <new year>  faltan %d Minutos :D", contReal);

                break;
            case 5:
                printf("Llenar caracteres por izquierda o derecha\n");
                char llenar [200];
                int opcion, cantidad;

                fflush(stdin);
                printf("ingrese la cadena: \n");
                scanf("%s", &cadena);

                printf("ingrese un caracter: \n");
                scanf("%s", &llenar);
                fflush(stdin);
                printf("ingrese la cantidad de veces: \n");
                scanf("%s", &cantidad);
                fflush(stdin);
                printf("1.) Izquierda\n2.) Derecha\n");
                scanf("%d", &opcion);
                llenarCaracteres(cadena, llenar, cantidad, opcion);

                break;
            case 6:
                printf("Borrar caracteres \n");
                char borrar [200];

                fflush(stdin);
                printf("ingrese la cadena: ");
                fgets(&cadena, 200, stdin);
                printf("Ingrese el caracter a borrar: ");
                fflush(stdin);
                fgets(&borrar, 200, stdin);

                borrarCaracteres(cadena, borrar);
                printf("Despues de remover es: '%s'\n", cadena);
                break;
            case 7:
                printf("Intersección");
                break;
            case 8:
                printf("Ingrese la cadena de texto\n");
                gets(cadena);
                gets(cadena);
                int i=0;
                int j=0;
                char resultado[30]="";
                while(cadena[i])
                {
                    if(!strchr(resultado,cadena[i]))
                        resultado[j++]=cadena[i];
                    i++;
                }
                resultado[j]='\0';
                printf("\nEl resultado seria!\n%s",resultado);
                break;
            case 9:
                printf("Contar palabras");
                break;
            case 10:
                //Validar correo electronico

                printf("Ingrese su correo electronico\n>>");

                gets(cadena);
                gets(cadena);

                for (int i = 0; i < 40; i++) {
                    tok = strstr(cadena,"@");
                    if (tok != NULL) {
                        break;
                    }
                }
                for (int i = 0; i < 40; i++) {
                    next_tok1 = strstr(cadena,".");
                    if (next_tok1 != NULL && &next_tok1 > &tok) {
                        break;
                    }
                }
                if (tok != NULL) {
                    if (next_tok1 != 0 && &next_tok1 < &tok) {
                        printf("Correo valido.");
                    }
                    else {
                        printf("Su correo es invalido, por favor reviselo.");

                    }
                }
                else {
                    printf("Su correo es invalido, por favor reviselo.");

                }
                break;

            case 11:
                printf("BYE BYE");
                break;
        }
    }while(op!=11);
    return 0;
    }



