#include <stdio.h>

int eng_katta(int son) {
    int max = 0;

    while (son > 0) {
        int raqam = son%10;

        if (raqam >max) {
            max =raqam;
        }

        son = son/10;
    }

    return max;
}

int main() {
    int son;
    scanf("%d", &son);

    printf("%d", eng_katta(son));

    return 0;
}