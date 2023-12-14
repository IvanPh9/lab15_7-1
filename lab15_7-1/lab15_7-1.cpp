#include <stdio.h>
#include <stdlib.h>
#include <locale>


int main() {
    setlocale(LC_CTYPE, "ukr"); //Українізація
    int size;
    // Введення розміру масиву від користувача
    do {
        printf("Введiть розмiр масиву: ");
        scanf_s("%d", &size);
    } while (size <= 0);

    // Виділення пам'яті для масиву
    int* array = (int*)malloc(size * sizeof(int));

    // Введення елементів масиву від користувача
    printf("Введiть елементи масиву:\n");
    for (int i = 0; i < size; ++i) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }
    int choice;
    bool t = 1;
    // Вибір операції від користувача
    printf("Виберiть операцiю:\n");
    printf("1. Додати елементи\n");
    printf("2. Помножити елементи\n");
    while (t) {
        printf("Ваш вибiр: ");
        scanf_s("%d", &choice);
        if (choice == 1) {
            // Накопичення суми елементів масиву
            int sum = 0;
            for (int i = 0; i < size; ++i) {
                sum += array[i];
            }
            printf("Сума елементiв масиву: %d\n", sum);
            t = 0;
        }
        else if (choice == 2) {
            // Накопичення добутку елементів масиву
            int product = 1;
            for (int i = 0; i < size; ++i) {
                product *= array[i];
            }
            printf("Добуток елементiв масиву: %d\n", product);
            t = 0;
        }
        else {
            printf("Невiрний вибiр операцiї.\n");
        }
    }
    // Звільнення пам'яті
    free(array); // Звільнення пам'яті
    return 0;
}
