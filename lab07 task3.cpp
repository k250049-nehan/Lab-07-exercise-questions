#include <stdio.h>
int main() {
    int quizMarks[10], passed[10], failed[10];
    int passCount = 0, failCount = 0;
    int totalEntered = 0;
    float avgPass, avgFail;
    for (int i = 0; i < 10; i++) {
        int mark;
        printf("Enter quiz mark for student %d (or -1 to exit): ", i + 1);
        scanf("%d", &mark);
        if (mark == -1) {
            break;
        }
        if (mark >= 0 && mark <= 10) {
            quizMarks[totalEntered] = mark;
            if (mark >= 5) {
                passed[passCount] = mark;
                passCount++;
            } else {
                failed[failCount] = mark;
                failCount++;
            }
            totalEntered++;
        } else {
            printf("Invalid mark. Please enter a value between 0 and 10.\n");
            i--;
        }
    }
    printf("\n========RESULTS========\n");
    printf("\nAll Entered Quiz Marks:\n");
    for (int i = 0; i < totalEntered; i++) {
        printf("%d ", quizMarks[i]);
    }
    int passSum = 0;
    printf("\n\nPassed Marks of Students:\n");
    for (int i = 0; i < passCount; i++) {
        printf("%d ", passed[i]);
        passSum += passed[i];
    }
    avgPass=passSum/passCount;
    if (passCount > 0)
        printf("\nAverage of Passed Students: %.2f\n", avgPass);
    else
        printf("\nNo passed students to calculate average.\n");
    int failSum = 0;
    printf("\nFailed Marks of Students:\n");
    for (int i = 0; i < failCount; i++) {
        printf("%d ", failed[i]);
        failSum += failed[i];
    }
    avgFail=failSum/failCount;
    if (failCount > 0)
        printf("\nAverage of Failed Students: %.2f\n", avgFail);
    else
        printf("\nNo failed students to calculate average.\n");
    return 0;
}

