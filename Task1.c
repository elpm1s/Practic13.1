#include <stdio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "RUS");

    printf("%s", "Введите имя:\n");

    char Name[20]; // Массив для хранения введенного имени
    scanf("%s", &Name);

    // Шаг 3: Формирование строки с приветствием

    char Snew[50] = "Hello, "; // Инициализация строки приветствия
    strcat(Snew, Name); // Добавляем введ

    // Преобразуем все символы строки Snew в заглавные
    for (int i = 0; Snew[i]; i++) {
        Snew[i] = toupper(Snew[i]);
    }

    // Вычисление необходимого количества восклицательных знаков
    int len = strlen(Snew); // Длина строки с приветствием
    int a = 40 - len - 1; // -1 для учета знака "!" в конце строки

    // Добавление восклицательных знаков
    for (int i = 0; i < a; i++) {
        strcat(Snew, "!");
    }

    // Шаг 4: Вывод приветствия на экран
    printf("%s\n", Snew); // Печать результата

    return 0;
}
