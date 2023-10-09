#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    char numbers[10000];
    char delete;
    scanf("%d", &n);
    int d = n;
    scanf("%c", &delete);
    for(int i = 0; i < n; i++)
    {
        scanf("%c", &numbers[i]);
    }
    int k;
    scanf("%d", &k);
    int mm = k;
        for (i = 0; i < (mm - 1); i++)
        {
            char m;
            m = numbers[i];
            numbers[i] = numbers[mm - 1];
            numbers[mm - 1] = m;
            mm --;
        }
        for(i = k; i < (d - 1); i++)
        {
            char m;
            m = numbers[i];
            numbers[i] = numbers[d - 1];
            numbers[d - 1] = m;
            d --;
        }
    for(int i = 0; i < n; i++)
    {
        printf("%c", numbers[i]);
    }
    return 0;
}
/*#include <stdio.h>
#include <string.h>
void reverseSubstring(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n, k;
    scanf("%d", &n);
    char sequence[1000000];
    scanf("%s", sequence);
    scanf("%d", &k);
    reverseSubstring(sequence, 0, k - 1);
    reverseSubstring(sequence, k, n - 1);
    printf("%s\n", sequence);
    return 0;
}*/