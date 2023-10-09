#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[1000000] = { 0 };
    for (int i = 0; i < 2 * n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int record[1000001] = {0};
    for (int i = 0; i < 2 * n - 1; i++) {
        record[arr[i]]++;
    }
    for (int i = 1; i <= 1000000; i++) {
        if (record[i] == 1) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
