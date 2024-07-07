#include <stdio.h>

void mapMarkToGrade(int studentId, int mark)
{
    if (mark <= 100 && mark >= 90)
        printf("Student %d with mark %d got A+\n", studentId, mark);
    else if (mark < 90 && mark >= 80)
        printf("Student %d with mark %d got A\n", studentId, mark);
    else if (mark < 80 && mark >= 70)
        printf("Student %d with mark %d got B\n", studentId, mark);
    else if (mark < 70 && mark >= 60)
        printf("Student %d with mark %d got C\n", studentId, mark);
    else if (mark < 60 && mark >= 50)
        printf("Student %d with mark %d got D\n", studentId, mark);
    else
        printf("Student %d with mark %d got F\n", studentId, mark);
}

int main()
{
    int marks[] = {99, 42, 67, 91, 80, 77};
    int length = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < length; i++)
    {
        int studentId = i + 1, mark = marks[i];
        mapMarkToGrade(studentId, mark);
    }

    return 0;
}