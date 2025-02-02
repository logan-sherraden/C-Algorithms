#include <stdio.h>

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
        snow2_index = start - offset;
        if (snow2_index <= -1)
        snow2_index = snow2_index + 6;
    if (snow1[offset] != snow2[snow2_index])
        return 0;
    }
    return 1;
}

// check both scans
int are_identical(int snow1[], int snow2[]) {
    int start;
    for (start = 0; start < 6; start++) {
        if (identical_right(snow1, snow2, start))
            return 1;
        if (identical_left(snow1, snow2, start))
            return 1;
}
return 0;
}

void identify_identical(int snowflakes[][6], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if  (are_identical(snowflakes[i], snowflakes[j])) {
                printf("Twin snowflakes found.\n");
                return;
            }
        }
    }
    printf("No two snowflakes are alike.\n");
}

int main(void) {
    int a[5] = {1, 2, 3, 1, 5};
    identify_identical(a, 5);
    return 0;
}
