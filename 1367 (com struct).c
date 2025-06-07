#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int submissionCount;

    Problem problems[MAX_PROBLEMS];

    while (1) {
        scanf("%d", &submissionCount);
        if (submissionCount == 0) break;
    
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }
    
        int totalTime = 0;
        int totalSolved = 0;
        
        //variaveis temporarias
        char tempProblem[2];
        tempProblem[1] = '\0';
        tempProblem[0] = '\0';
        int tempTime = 0;
        int solvedTime = 0;
        char judgement[10];
        for (int z = 0; z < 10; z++) {
            judgement[z] = '\0';
        }
        
        for (int i = 0; i < submissionCount; i++) {
            for (int z = 0; z < 10; z++) {
                judgement[z] = '\0';
            }
            scanf(" %c %d %s", &tempProblem[0], &tempTime, judgement);
            if (strcmp("correct", judgement) == 0) {
                if (problems[tempProblem[0] - 65].solved == 0) {
                    problems[tempProblem[0] - 65].solved++;
                    solvedTime += tempTime;
                }
            }
            else if (strcmp("incorrect", judgement) == 0) {
                if (problems[tempProblem[0] - 65].solved == 0) problems[tempProblem[0] - 65].penalty++;
            }
        }
        for (int x = 0; x < 26; x++) {
            if (problems[x].solved == 1) {
                totalTime += 20 * problems[x].penalty;
                totalSolved++;
            }
        }
        totalTime += solvedTime;
        printf("%d %d\n", totalSolved, totalTime);
    }
    return 0;
}
