#include <stdio.h>
#include <stdlib.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxWealth = 0;
    for(int i = 0; i < accountsSize; i++){
        int temp = 0;
        for(int j = 0; j < *accountsColSize; j++) temp += accounts[i][j];
        if(temp > maxWealth) maxWealth = temp;
    }
    return maxWealth;
}

int main() {
    // Example
    int arr[2][3] = {{1, 2, 3}, {3, 2, 1}};
    int accoutsSize = 2;
    int accountsColSize = 3;

    int* input[2];
    input[0] = arr[0];
    input[1] = arr[1];

    printf("Example: %d\n", maximumWealth(input, accoutsSize, &accountsColSize));

    return 0;
}