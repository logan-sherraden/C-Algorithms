#include <stdio.h>

// snowflakes are represented as arrays with each number representing the length of each snowflakes arms
// identify identical arrays function
void identify_identical(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if  (arr[i] == arr[j]) {
                printf("Twin integers found.\n");
                return;
            }
        }
    }
    printf("No two integers are alike.\n");
}

int main(void) {
    int a[5] = {1, 2, 3, 1, 5};
    identify_identical(a, 5);
    return 0;
}

// scan arrays from right to left
int identical_right(int snow1[], int snow2[],
                    int start) {
    int offset;
    for (offset =0; offset < 6; offset++) {
    if (snow1[offset] != snow2[start + offset]) 
        return 0;
    }
    return 1;
 }
 
// scan arrays from right to left
// NOTE: can possibly use %(mod operator) to solve the wrap around problem p.6
int identical_right(int snow1[], int snow2[], int start) {
    int offset, snow2_index;
    for (offset =0; offset < 6; offset++) {
        snow2_index = start + offset;
        if (snow2_index >= 6)
        snow2_index = snow2_index - 6;
    if (snow1[offset] != snow2[snow2_index])
        return 0;
    }
    return 1;
 }

// scan arrays from left to right
int identical_left(int snow1[], int snow2[], int start) {
    int offset, snow2_index;
    for (offset =0; offset < 6; offset++) {
        snow2_index = start + offset;
        if (snow2_index >= 6)
        snow2_index = snow2_index +
         6;
    if (snow1[offset] != snow2[snow2_index])
        return 0;
    }
    return 1;
}