#include <iostream>
#include <windows.h>
#include <format>

using namespace std;

int main(){

    // Настройка консоли на вывод кириллицы
    SetConsoleOutputCP(65001);
    
    // Входные данные 
    string student_name_ru = "Александр Карасев";
    string student_name_en = "Alexandr Karasev";
    int student_number = 19;
    string group_number = "М3О-109БВ-26";
    string language_name = "C++";

    int control_value;

    // Формирование student_id
    string student_id = group_number + "/" + format("{:02}", student_number);
    
    // Вычисление контрольного значения
    control_value = 304 * student_number;

    // Вывод строк
    cout << "Hello to 304 from " << student_name_en << ", number " << student_number << ", group " << group_number << "!" << endl;
    cout << "Привет, 304! Это " << student_name_ru << ", номер " << student_number << ", группа " << group_number << "!" << endl;
    cout << "Student ID: " << student_id << " | Language: " << language_name << " | Control: " << control_value;

    return 0;
}

//g++ cpp/main.cpp -o cpp/main.exe && ./cpp/main.exe