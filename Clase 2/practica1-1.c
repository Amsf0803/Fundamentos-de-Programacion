/*
Andre Michel Santana Fajardo

Programa que pide los valores de la Distancia que recorre
el participante, los minutos, segundos y centesimas que le
tomo recorrer esa distancia

*/

#include <stdio.h>

void main(){
    float DIS, MIN, SEG, CEN, TSE, VMS, VKH; //Declaramos variables

    printf("Cuanta distancia recorrio el participante en metros: "); // Preguntamos por la distancia recorrida
    scanf("%f", &DIS); // Guardamos el valor obtenido en la variable DIS

    printf("Cuantos minutos le tomo al participante: "); // Preguntamos por los minutos que le tomo
    scanf("%f", &MIN); // Guardamos el valor obtenido en la variable MIN

    printf("Cuantos segundos le tomo al participante: "); // Preguntamos por los segundos que le tomo
    scanf("%f", &SEG); // Guardamos el valor obtenido en la variable SEG

    printf("Cuantas centesimas le tomo al participante: "); // Preguntamos por las centesimas que le tomo
    scanf("%f", &CEN); // Guardamos el valor obtenido en la variable CEN

    TSE = (MIN*60)+ SEG + (CEN/100); // Convertimos todo a segundos

    VMS = DIS/TSE; // Sacamos la velocidad en metros por segundo

    VKH = (VMS*3600)/ 1000; // Convertimos metros por segundo a kilometros por hora

    printf("La velocidad del participante fue: %f kilometros por hora",VKH);
}
