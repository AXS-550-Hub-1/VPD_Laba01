type StudentInfo = {
    StudentNameRu: string
    StudentNameEn: string
    StudentNumber: int
    GroupNumber: string
    LanguageName: string
}


// Входные данные
let student = {
    StudentNameRu = "Александр Карасев"
    StudentNameEn = "Alexandr Karasev"
    StudentNumber = 19
    GroupNumber = "М3О-109БВ-26"
    LanguageName = "F#"
}

// Новые значения
let controlValue = 304 * student.StudentNumber
let studentID = $"{student.GroupNumber}/{student.StudentNumber:D2}"
let wordsSum = student.StudentNameRu.Split(' ') |> Array.map(fun word -> word.Length) |> Array.sum


// Вывод строк
printfn $"Hello to 304 from {student.StudentNameEn}, number {student.StudentNumber}, group {student.GroupNumber}!"
printfn $"Привет, 304! Это {student.StudentNameRu}, номер {student.StudentNumber}, группа {student.GroupNumber}!"
printfn $"Student ID: {studentID} | Language: {student.LanguageName} | Control: {controlValue}"
printfn $"Сумма длин слов в StudentNameRu: {wordsSum}"

//dotnet fsi --exec fsharp/main.fsx