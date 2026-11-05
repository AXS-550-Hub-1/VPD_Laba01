namespace CSharp
{
    public record StudentInfo(string StudentNameRu, string StudentNameEn, int StudentNumber, string GroupNumber, string LanguageName);
    class Programm
    {
        static void Main(string[] args)
        {
            // Входные данные
            var student = new StudentInfo("Александр Карасев", "Alexandr Karasev", 19, "М3О-109БВ-26", "C#");

            // Новые значения
            int controlValue = 304 * student.StudentNumber;
            string studentID = $"{student.GroupNumber}/{student.StudentNumber:D2}";

            // Вывод строк
            Console.WriteLine($"Hello to 304 from {student.StudentNameRu}, number {student.StudentNumber}, group {student.GroupNumber}!");
            Console.WriteLine($"Привет, 304! Это {student.StudentNameRu}, номер {student.StudentNumber}, группа {student.GroupNumber}!");
            Console.WriteLine($"Student ID: {studentID} | Language: {student.LanguageName} | Control: {controlValue}");
        }
    }
}

//dotnet run csharp/main.cs