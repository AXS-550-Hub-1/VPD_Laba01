% Настрока терминала на вывод кириллицы
:- encoding(utf8).

% Факты
student_info('Карасев Александр', 'Karasev Alexandr', 'М3О-109БВ-26', 19, 'Prolog').

%Правила
extra_info(StudentID, ControlValue) :-
    student_info(_, _, GroupNumber, Num, _),
    ControlValue is Num * 304,
    format(atom(StudentID), '~w/~|~`0t~d~2+', [GroupNumber, Num]).

main :-

    student_info(StudentNameRu, StudentNameEn, GroupNumber, StudentNumber, Language),
    extra_info(StudentID, ControlValue),

    format('Hello to 304 from ~w, number ~d, group ~w!~n', [StudentNameEn, StudentNumber, GroupNumber]),
    format('Привет, 304! Это ~w, номер ~d, группа ~w!~n', [StudentNameRu, StudentNumber, GroupNumber]),
    format('Student ID: ~w | Language: ~w | Control: ~d~n', [StudentID, Language, ControlValue]).

%swipl -q -s prolog/main.pl -g main -t halt