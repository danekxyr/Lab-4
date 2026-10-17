/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Лабораторная работа №4
 * Назначение: Конвертер величин
 */

#include <stdio.h>

int main(void)
{
    double value, result;
    int command;

    // 1. Ввод исходного значения
    printf("Введите значение для преобразования: ");
    if (scanf("%lf", &value) != 1) {
        printf("Ошибка: неверный ввод числового значения.\n");
        return 1;
    }

    // 2. Вывод меню и ввод команды
    printf("1 - метры в сантиметры\n");
    printf("2 - килограммы в граммы\n");
    printf("3 - градусы Цельсия в градусы Фаренгейта\n");
    printf("4 - часы в минуты\n");
    printf("Выберите операцию: ");
    
    if (scanf("%d", &command) != 1) {
        printf("Ошибка: неверный ввод команды.\n");
        return 1;
    }

    // 3. Проверка на неотрицательность перед switch (для команд 1, 2 и 4)
    if ((command == 1 || command == 2 || command == 4) && value < 0) {
        printf("Ошибка: значение для этой операции не может быть отрицательным.\n");
        return 1;
    }

    // 4. Выполнение преобразований с помощью switch
    switch (command)
    {
        case 1:
            result = value * 100.0;
            printf("Результат: %.2f см\n", result);
            break;
            
        case 2:
            result = value * 1000.0;
            printf("Результат: %.2f г\n", result);
            break;
            
        case 3:
            result = value * 9.0 / 5.0 + 32.0;
            printf("Результат: %.2f °F\n", result);
            break;
            
        case 4:
            result = value * 60.0;
            printf("Результат: %.2f мин\n", result);
            break;
            
        default:
            printf("Ошибка: неизвестная команда.\n");
            break;
    }

    return 0;
}