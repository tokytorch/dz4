#include <stdio.h>
#include <locale.h>

int main() 
{

    setlocale(LC_ALL, "RUS");

    int A, B;

    printf("���������: �������� ������� ������\n");
    printf("===================================\n");

    printf("������� ����� ������ ������ A: ");
    scanf("%d", &A);

    printf("������� ����� ������ ������ B: ");
    scanf("%d", &B);

    int A_even = (A % 2 == 0);  
    int B_even = (B % 2 == 0);  

    int isWin = (A_even && !B_even) || (!A_even && B_even);

    printf("\n��������� �������:\n");
    printf("����� A: ������ %d (%s)\n", A, A_even ? "������" : "��������");
    printf("����� B: ������ %d (%s)\n", B, B_even ? "������" : "��������");
    printf("������� ������: %s\n", isWin ? "���������" : "�� ���������");

    if (isWin) {
        printf("�����������! � ���� ������ ���� ����������!\n");
    }
    else {
        printf("� ���� ������ ��� ����������\n");
    }

}