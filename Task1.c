#include <stdio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "RUS");

    printf("%s", "������� ���:\n");

    char Name[20]; // ������ ��� �������� ���������� �����
    scanf("%s", &Name);

    // ��� 3: ������������ ������ � ������������

    char Snew[50] = "Hello, "; // ������������� ������ �����������
    strcat(Snew, Name); // ��������� ����

    // ����������� ��� ������� ������ Snew � ���������
    for (int i = 0; Snew[i]; i++) {
        Snew[i] = toupper(Snew[i]);
    }

    // ���������� ������������ ���������� ��������������� ������
    int len = strlen(Snew); // ����� ������ � ������������
    int a = 40 - len - 1; // -1 ��� ����� ����� "!" � ����� ������

    // ���������� ��������������� ������
    for (int i = 0; i < a; i++) {
        strcat(Snew, "!");
    }

    // ��� 4: ����� ����������� �� �����
    printf("%s\n", Snew); // ������ ����������

    return 0;
}
