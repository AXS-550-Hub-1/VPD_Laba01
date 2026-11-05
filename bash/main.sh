#!/bin/bash

# Входные данные
student_name_ru="Карасев Александр"
student_name_en="Karasev Alexandr"
student_number=19
group_number="М3О-109БВ-26"
language_name="Bash"

# Вычисление контрольного значения, student_id и количества символов в student_name_en
control_value=$((304*student_number))
printf -v student_id "%s/%02d" $group_number $student_number 
len=$(echo student_name_en | wc -m)


echo -e "Hello to 304 from" $student_name_en "\b, number" $student_number "\b, group" $group_number "\b!"
echo -e "Привет, 304! Это" $student_name_ru "\b, номер" $student_number "\b, группа" $group_number "\b!"
echo "Student ID:" $student_id" | Language:" $language_name "| Control:" $control_value
echo -n "Количество символов:" $len

#chmod +x bash/main.sh && ./bash/main.sh