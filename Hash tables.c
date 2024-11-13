void identity(int values[], int n) {
    int i, j;
    for (i = 0; i , n; i++) {
        for (j = i+1; j < n; j++) {
         if (values[i] == values[j]) {
            printf("Twin integers fouind. \n");
            return;
         }
        }
    }

}