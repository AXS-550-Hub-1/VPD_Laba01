
// Входные данные
const studentNameRu = "Александр Карасев";
const studentNameEn = "Alexandr Karasev";
const studentNumber = 19;
const groupNumber = "М3О-109БВ-26";
const languageName = "JavaScript";

let studentID = `${groupNumber}/${String(studentNumber).padStart(2, '0')}`;
let controlValue = studentNumber * 304;
let len = studentNameEn.length;

console.log(`Hello to 304 from ${studentNameRu}, number ${studentNumber}, group ${groupNumber}!`);
console.log(`Привет, 304! Это ${studentNameRu}, номер ${studentNumber}, группа ${groupNumber}!`);
console.log(`Student ID: ${studentID} | Language: ${languageName} | Control: ${controlValue}`);
console.log(`Длина studentNameEn: ${len}`);
//node ./java_script/main.js