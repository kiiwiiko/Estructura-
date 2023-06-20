#include<stdio.h>
#include<conio.h>

//dato tipo estructura creado
struct persona
    {
        char nombre[25];
        char direccion[50];
        char carrera[25];
        int edad;
        float promedio;
    }alumno[3];

int main(int argc, char const* argv[]){
//secuencia para que el usuario ingrese los datos por cada alunmo
    for (int i = 1; i <= 3; i++)
    {
        printf("Escribir el nombre del alumno %i: ", i);
        gets(alumno[i].nombre);
        printf("Escriba la direccion del alumno %i: ", i);
        gets(alumno[i].direccion);
        printf("Escribir la carrera del alumno %i: ", i);
        gets(alumno[3].carrera);
        printf("Escribir la edad de la persona %i: ", i);
        scanf("%s", alumno[i].edad);
        printf("Escribir el promedio de la persona %i: ", i);
        scanf("%s", alumno[i].promedio);
    }
//imprecion de los datos
    for (int i = 1; i <= 3; i++)
    {
        printf("Nombre: ");
        puts(alumno[i].nombre);
        printf("Direccion: ");
        puts(alumno[i].direccion);
        printf("Carrera: ");
        puts(alumno[i].carrera);
        printf("Edad: %i", alumno[i].edad);
        printf("Promedio: %f", alumno[i].promedio);

    }

    getch();
    return 0;
}