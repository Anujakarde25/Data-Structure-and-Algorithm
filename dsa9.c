#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n, i,*grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    grade = (int *)calloc(n, sizeof(int));

    printf("\nGrades after initialization:\n");
    for(i = 0; i < n; i++)
    {
        printf("Student Grade = %d\n" ,grade[i]);
    }
    free(grade);
}
