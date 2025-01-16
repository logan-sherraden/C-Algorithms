#include <stdio.h>

// snowflakes are represented as arrays with each number representing the length of each snowflakes arms

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

int main() {
    int snow1[6] = {1, 3, 4, 6, 7, 2};
    int snow2[6] = {1, 2, 2, 2, 4, 6};
    if (are_identical(snow1, snow2)) {
        printf("Snowflakes are identical.\n");
    } else {
        printf("Snowflakes are NOT identical bro..smh\n");
    }
     
     return 0;
}
