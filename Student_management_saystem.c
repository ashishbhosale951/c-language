
#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0, average;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter marks of subject %d: ", i);
        scanf("%f", &marks);
        total = total + 
    }

    average = total / n;

    printf("\n------ Student Result ------\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    if(average >= 75)
        printf("Grade: A\n");
    else if(average >= 60)
        printf("Grade: B\n");
    else if(average >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
