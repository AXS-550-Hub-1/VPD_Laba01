"use strict";
const student = {
    studentNameRu: "Александр Карасев",
    studentNameEn: "Alexandr Karasev",
    studentNumber: 9,
    groupNumber: "М3О-109БВ-26",
    languageName: "TypeScript"
};
let newInfo = {
    studentID: `${student.groupNumber}/${String(student.studentNumber).padStart(2, '0')}`,
    controlValue: student.studentNumber * 304
};
console.log(`Hello to 304 from ${student.studentNameRu}, number ${student.studentNumber}, group ${student.groupNumber}!`);
console.log(`Привет, 304! Это ${student.studentNameRu}, номер ${student.studentNumber}, группа ${student.groupNumber}!`);
console.log(`Student ID: ${newInfo.studentID} | Language: ${student.languageName} | Control: ${newInfo.controlValue}`);
//tsc type_script/main.ts --outDir type_script/main.js  &&  node ./type_script/main.js
