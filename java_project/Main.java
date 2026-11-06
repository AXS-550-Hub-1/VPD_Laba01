package java_project;

import java.io.PrintStream;
import java.nio.charset.StandardCharsets;

public class Main{
    public static void main(String[] args){
        // Настройка консоли
        System.setOut(new PrintStream(System.out, true, StandardCharsets.UTF_8));
        // Входные данные
        final String studentNameRu = "Александр Карасев";
        final String studentNameEn = "Alexandr Karasev";
        final int studentNumber = 19;
        final String groupNumber = "М3О-109БВ-26";
        final String languageName = "Java";

        // Новые значения
        int controlValue = 304 * studentNumber;
        String studentID = String.format("%s/%02d", groupNumber, studentNumber);

        System.out.printf("Hello to 304 from %s, number %d, group %s!\n", studentNameEn, studentNumber, groupNumber);
        System.out.printf("Привет, 304! Это %s, номер %d, группа %s!\n", studentNameRu, studentNumber, groupNumber);
        System.out.printf("Student ID: %s | Language: %s | Control: %d", studentID, languageName, controlValue);
    }
}

//javac java_project/Main.java && java java_project/Main
