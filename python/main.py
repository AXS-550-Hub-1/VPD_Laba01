
# Входные данные
student_name_ru = "Карасев Александр"
student_name_en = "Karasev Alexandr"
student_number = 19
group_number = "М3О-109БВ-26"
language_name = "Python"

# Вычисление контрольного значения, student_id и количества слов в student_name_en
student_id = f"{group_number}/{student_number:02d}"
control_value = 304 * student_number
word_count = len(student_name_en.split())

# Вывод строк
print("Hello to 304 from",student_name_en,"\b, number", student_number,"\b, group", group_number,"\b!")
print("Привет, 304! Это",student_name_ru, "\b, номер", student_number,"\b, группа", group_number,"\b!")
print("Student ID:", student_id, "| Language:", language_name, "| Control:", control_value)
print("Количество слов:", word_count)

#python3 python/main.py