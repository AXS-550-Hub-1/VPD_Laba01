


fn main(){

    // Входные данные
    let student_name_ru: &str = "Александр Карасев";
    let student_name_en: &str = "Alexandr Karasev";
    let student_number: i32 = 19;
    let group_number: &str = "М3О-109БВ-26";
    let language_name: &str = "Rust";

    // Новые значения
    let student_id = format!("{}/{:02}", group_number, student_number);
    let control_value = 304 * student_number;
    
    // Вывод строк
    println!("Hello to 304 from {}, number {}, group {}!", student_name_en, student_number, group_number);
    println!("Привет, 304! Это {}, номер {}, группа {}!", student_name_ru, student_number, group_number);
    println!("Student ID: {} | Language: {} | Control: {}", student_id, language_name, control_value);
    println!("ID студента: {}", student_id);
}

//rustc rust/main.rs -o rust/main && ./rust/main



