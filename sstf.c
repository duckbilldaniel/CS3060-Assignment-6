#include <stdio.h>
#include <stdlib.h>

void fcfs(int blockList[], int count) {
        printf("In SSTF:\n");
        for (int i = 0; i < count; i++) {
                printf("%d ", blockList[i]);
        }
        print("\n");
}
