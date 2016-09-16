#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, minA, minB,minutos = 0,horas = 0;
    scanf("%d %d %d %d",&a ,&minA ,&b ,&minB);
    if(a > b)
    {
        horas = (24 -a) + b;
        if(minB > minA)
        {
            minutos = minB - minA;

        }
        else if(minB < minA)
        {
            minutos = (60 - minA) + minB;
            horas --;
        }
        else if(minA == minB)
        {
            minutos = 0;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
    }
    else if (a < b)
    {
        horas = b - a;
        if(minB > minA)
        {
            minutos = minB - minA;

        }
        else if(minB < minA)
        {
            minutos = (60 - minA) + minB;
            horas --;
        }
        else if(minA == minB)
        {
            minutos = 0;
        }

        if((b - a ) == 1 && minA > minB)
        {
            horas = 0;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
    }
    else if(a == b && minA == minB && minA == a && a != 0 && b != 0 && minB != 0 && minA != 0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a == b && minA != minB)
    {
        if(minA > minB)
        {
            minutos = 60 - (minA - minB);
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",minutos);
        }
        else if(minA < minB)
        {
            minutos = minB - minA;
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",minutos);
        }


    }
    else if(a == 0 && b == 0 && minB == 0 && minA == 0)
    {
       printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(a == b && minA == minB)
    {
       printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }


    return 0;
}
