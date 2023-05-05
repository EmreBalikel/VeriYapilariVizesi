// SORU 2:


#include <stdio.h>

	int	main() {
	 	
    int dizi1[] = {1, 3, 4, 5};
    int dizi2[] = {2, 4, 6, 8};
    int sayidizisi1 = sizeof(dizi1) / sizeof(int);
    int sayidizisi2 = sizeof(dizi2) / sizeof(int);
    int dizi3[sayidizisi1 + sayidizisi2]; 

    int i = 0, j = 0, k = 0;

    while (i < sayidizisi1 && j < sayidizisi2) {
        if (dizi1[i] < dizi2[j]) {
            dizi3[k] = dizi1[i];
            i++;
        } else {
            dizi3[k] = dizi2[j];
            j++;
        }
        k++;
    }

    while (i < sayidizisi1) {
        dizi3[k] = dizi1[i];
        i++;
        k++;
    }

    while (j < sayidizisi2) {
        dizi3[k] = dizi2[j];
        j++;
        k++;
    }

    for (int m = 0; m < k; m++) {
        printf("%d ", dizi3[m]);
    }

    return 0;
}
