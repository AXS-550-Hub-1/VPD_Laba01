package main

import "fmt"

func main() {

	// Входные данные
	const StudentNameRu string = "Александр Карасев"
	const StudentNameEn string = "Alexandr Karasev"
	const StudentNumber int = 19
	const GroupNumber string = "М3О-109БВ-26"
	const LanguageName string = "Go"

	// Новые значения
	studentID := fmt.Sprintf("%s/%02d", GroupNumber, StudentNumber)
	controlValue := 304 * StudentNumber

	fmt.Printf("Hello to 304 from %s, number %d, group %s!\n", StudentNameEn, StudentNumber, GroupNumber)
	fmt.Printf("Привет, 304! Это %s, номер %d, группа %s!\n", StudentNameRu, StudentNumber, GroupNumber)
	fmt.Printf("Student ID: %s | Language: %s | Control: %d", studentID, LanguageName, controlValue)
}

//go run go/main.go
