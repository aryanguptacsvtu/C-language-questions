#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    // Write your code here.
    int sum = 0;
    if (gender == 'g')
    {
        for (int i = 1; i < number_of_students; i += 2)
        {
            sum += marks[i];
        }
    }
    else if (gender == 'b')
    {
        for (int j = 0; j < number_of_students; j += 2)
        {
            sum += marks[j];
        }
    }
    return sum;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}

/* "Students Marks Sum":-

"Function Description":-
Complete the function, marks_summation in the editor below. marks_summation has the following parameters:
- int marks[number_of_students]: the marks for each student
- int number_of_students: the size of marks[]
- char gender: either 'g' or 'b'

"Returns":-
• int: the sum of marks for boys if gender = b, or of marks of girls if gender = g

"Input Format":-
The first line contains number_of_students, denoting the number of students in the class,hence the number of elements in marks.
Each of the number_of_students subsequent lines contains marksi.
The next line contains gender.

"Sample Input":-
3
3
2
5
b

"Sample Output ":-
8           { marks[0] + marks[2] = 3 + 5 = 8 }

"Sample Input":-
5
1
2
3
4
5
g

"Sample Output":-
6          {marks[1] + marks[3] = 2 + 4 = 6 }         
*/