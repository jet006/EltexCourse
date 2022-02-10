#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void PrintMatrix(){
    int N;
    printf("������� ������ ���������� �������: ");
    scanf("%d", &N);
    int Mas[N][N];
    int k = 0;
    for (int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            Mas[i][j]=++k;
            printf("%d\t", Mas[i][j]);
        }
        printf("\n");
    }
}

void ReverseMatrix(){
    int N;
    printf("������� ������ �������: ");
    scanf("%d", &N);
    int Mas[N];
    for (int i=0; i<N;i++){
        scanf("%d", &Mas[i]);
    }
    for (int i = 0; i < N/2; i++)
    {
        int k = Mas[i];
        Mas[i] = Mas[N - i - 1];
        Mas[N - i - 1] = k;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", Mas[i]);
    }
}

void Triangle(){
    int N;
    printf("������� ������ ���������� �������: ");
    scanf("%d", &N);
    int Mas[N][N];
    for (int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            Mas[i][j]= 0;
        }
    }
    int k = N-1;
    for (int i=0; i<N;i++){
        Mas[i][k] = 1;
        if (i != 0){
            int j = k;
            while (j < N-1){
                Mas[i][++j] = 1;
            }
        }
        k--;
    }
    for (int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            printf("%d", Mas[i][j]);
        }
        printf("\n");
    }
}

void Snail(){
    int N;
    printf("������� ������ ���������� �������: ");
    scanf("%d", &N);
    int Mas[N][N];
    int k = 1;
    for (int i=0; i<N/2;i++){
        for (int j=i; j<N-i;j++){
            Mas[i][j]= k++;
        }
        for (int j = i+1; j<N-i;j++){
            Mas[j][N-1-i]= k++;
        }
        for (int j = N-2-i; j>=i;j--){
            Mas[N-1-i][j]= k++;
        }
        for (int j = N-2-i; j>i;j--){
            Mas[j][i]= k++;
        }
    }
    Mas[N/2][N/2] = N*N;
    for (int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            printf("%d\t", Mas[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    PrintMatrix();
    ReverseMatrix();
    Triangle();
    Snail();
}
