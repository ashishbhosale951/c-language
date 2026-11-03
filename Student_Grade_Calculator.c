#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage

    printf("Enter marks of 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade: A");
    else if (percentage >= 75)
        printf("\nGrade: B");
    else if (percentage >= 50)
        printf("\nGrade: C");
    else
        printf("\nGrade: Fail");

    return 0;
}
