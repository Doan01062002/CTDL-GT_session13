#include <stdio.h>

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sapXepChon(int arr[], int n) {
    int i, j, minIdx, soLanHoanDoi = 0;

    printf("Mang ban dau: ");
    inMang(arr, n);

    for (i = 0; i < n - 1; i++) {
        minIdx = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            soLanHoanDoi++;

            printf("Hoan doi: ");
            inMang(arr, n);
        }
    }

    printf("Sap xep hoan thanh voi %d lan hoan doi.\n", soLanHoanDoi);
    printf("Mang da sap xep: ");
    inMang(arr, n);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    sapXepChon(arr, n);

    return 0;
}

