#include <stdio.h>
#include <windows.h>

int main(){

    // Настройка консоли на вывод кириллицы
    SetConsoleOutputCP(65001);

    // Входные данные
    const char *student_name_ru = "Александр Карасев";
    const char *student_name_en = "Alexandr Karasev";
    int student_number = 19;
    char group_number[] = "М3О-109БВ-26";
    const char *language_name = "C";
 
    int len_number = 0, i = 1, control_value;

    // Формирование строки student_id 
    while(student_number / i > 0){
        i *= 10;
        len_number++;
    }

    char *student_id = (char *)malloc(sizeof(group_number) + len_number + 2);
    snprintf(student_id, sizeof(group_number) + len_number + 2, "%s/%02d", group_number, student_number);
    
    // Вычисление контрольного значения
    control_value = 304 * student_number;

    // Вывод строк
    printf("Hello to 304 from %s, number %d, group %s!\n", student_name_en, student_number, group_number);
    printf("Привет, 304! Это %s, номер %d, группа %s!\n", student_name_ru, student_number, group_number);
    printf("Student ID: %s | Language: %s | Control: %d", student_id, language_name, control_value);

    free(student_id);
    return 0;
}

//gcc c/main.c -o c/main.exe && ./c/main.exe