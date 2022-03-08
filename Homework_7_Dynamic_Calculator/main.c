#include <stdio.h>
#include <stdlib.h>
#include "calculator_command.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int count;
    int a;
    int b;
    int res;
    printf("Выберите операцию: \n1)Сложение;\n2)Вычитание;\n3)Умножение\n4)Деление;\n5)Завершение работы программы.\n"
    do{
       printf("Выберите номер операции: ");
       scanf("%i", &count);
       switch(count){
            case 1:
            {
                printf("Вы выбрали операцию сложения!");
                printf("Введите первой число: ");
                scanf("%d", &a);
                printf("Введите второе число: ");
                scanf("%d", &b);
                res = summ(a, b);
                printf("Результат сложения: %d \n", res);
                break;
            }
            case 2:
            {
                printf("Вы выбрали операцию вычитания!");
                printf("Введите первой число: ");
                scanf("%d", &a);
                printf("Введите второе число: ");
                scanf("%d", &b);
                res = substr(a, b);
                printf("Результат вычитания: %d \n", res);
                break;
            }
            case 3:
            {
                printf("Вы выбрали операцию умножения!");
                printf("Введите первой число: ");
                scanf("%d", &a);
                printf("Введите второе число: ");
                scanf("%d", &b);
                res = mult(a, b);
                printf("Результат умножения: %d \n", res);
                break;
            }
            case 4:
            {
                printf("Вы выбрали операцию деления!");
                printf("Введите первой число: ");
                scanf("%d", &a);
                printf("Введите второе число: ");
                scanf("%d", &b);
                res = divis(a, b);
                printf("Результат деления: %d \n", res);
                break;
            }
            case 5:
                 {
                     printf("Выход из калькулятора\n");
                     break;
                 }
            default:
                printf("wrong operation\n");
                break;
       }
    }
    while(count != 5);
}                 
