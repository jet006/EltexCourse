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
    printf("�������� ��������: \n1)��������;\n2)���������;\n3)���������\n4)�������;\n5)���������� ������ ���������.\n");
    do{
        printf("�������� ����� ��������: ");
        scanf("%i", &count);
        switch(count){
            case 1:
                {
                    printf("�� ������� �������� ��������!");
                    printf("������� ������ �����: ");
                    scanf("%d", &a);
                    printf("������� ������ �����: ");
                    scanf("%d", &b);
                    res = summ(a, b);
                    printf("��������� ��������: %d \n", res);
                    break;
                }
            case 2:
                {
                    printf("�� ������� �������� ���������!");
                    printf("������� ������ �����: ");
                    scanf("%d", &a);
                    printf("������� ������ �����: ");
                    scanf("%d", &b);
                    res = substr(a, b);
                    printf("��������� ���������: %d \n", res);
                    break;
                }
            case 3:
                {
                    printf("�� ������� �������� ���������!");
                    printf("������� ������ �����: ");
                    scanf("%d", &a);
                    printf("������� ������ �����: ");
                    scanf("%d", &b);
                    res = mult(a, b);
                    printf("��������� ���������: %d \n", res);
                    break;
                }
            case 4:
                {
                    printf("�� ������� �������� �������!");
                    printf("������� ������ �����: ");
                    scanf("%d", &a);
                    printf("������� ������ �����: ");
                    scanf("%d", &b);
                    res = divis(a, b);
                    printf("��������� �������: %d \n", res);
                    break;
                }
            case 5:
                {
                    printf("����� �� ������������\n");
                    break;
                }
            default:
				printf("wrong operation\n");
				break;
        }
    }
    while(count != 5);
}
