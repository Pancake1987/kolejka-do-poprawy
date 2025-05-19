//#include <iostream>
#include <stdio.h>
#include "array.h"

void menu(void)
{
    printf("\n");
    printf("1 - poloz liczbe w kolejce (dodaj)\n");
    printf("2 - odczytaj wartosc ze poczatku kolejki (pierwszy)\n");
    printf("3 - odejmij liczbe z poczatku kolejki(usun)\n");
    printf("4 - sprawdz czy kolejka jest pusty\n");
    printf("5 - sprawdz czy kolejka jest pelny\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isStackFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    Push(temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA pelny!!!\n\n");
                }

                break;

            case 2:
                if (!isStackEmpty()) {
                    temp = Top();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA pusty!!!\n\n");
                }

                break;

            case 3:
                if (!isStackEmpty()) {
                    temp = Pop();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona KOLEJKA pusty!!!\n\n");
                }
                break;

            case 4:
                if (isStackEmpty()) {
                    printf("KOLEJKA jest pusty.\n");
                }
                else {
                    printf("KOLEJKA nie jest pusty.\n");
                }
                break;

            case 5:
                if (isStackFull()) {
                    printf("KOLEJKA jest pelny.\n");
                }
                else {
                    printf("KOLEJKA nie jest pelny.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
