#include <stdio.h>


int main() {
    int dizi[] = {10, 20, 20, 10, 10, 20, 5, 20}; 
    int sayidizisi = sizeof(dizi) / sizeof(int); 

    for (int i = 0; i < sayidizisi; i++) {
        int eleman = dizi[i];
        int frekans = 1; 

        for (int j = i + 1; j < sayidizisi; j++) {
            if (dizi[j] == eleman) {
                frekans++;
                dizi[j] = -1; 
            }
        }

        if (eleman != -1) {
            printf("%d › %d\n", eleman, frekans);
        }
    }

    return 0;
}
