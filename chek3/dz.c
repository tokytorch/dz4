#include <stdio.h>
#include <locale.h>

int main() 
{

    setlocale(LC_ALL, "RUS");

    int A, B;

    printf("Викторина: Проверка условия победы\n");
    printf("===================================\n");

    printf("Введите номер кнопки игрока A: ");
    scanf("%d", &A);

    printf("Введите номер кнопки игрока B: ");
    scanf("%d", &B);

    int A_even = (A % 2 == 0);  
    int B_even = (B % 2 == 0);  

    int isWin = (A_even && !B_even) || (!A_even && B_even);

    printf("\nРезультат анализа:\n");
    printf("Игрок A: кнопка %d (%s)\n", A, A_even ? "четная" : "нечетная");
    printf("Игрок B: кнопка %d (%s)\n", B, B_even ? "четная" : "нечетная");
    printf("Условие победы: %s\n", isWin ? "ВЫПОЛНЕНО" : "НЕ ВЫПОЛНЕНО");

    if (isWin) {
        printf("Поздравляем! В этом раунде есть победитель!\n");
    }
    else {
        printf("В этом раунде нет победителя\n");
    }

}