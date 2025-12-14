#include <stdio.h>
#include <stdlib.h>

void get_stats(const int *tab, int n, int *min, int *max, double *avg) {
    int suma = 0;

    *min = tab[0];
    *max = tab[0];

    for (int i = 0; i < n; i++) {
        if (tab[i] < *min)
            *min = tab[i];
        if (tab[i] > *max)
            *max = tab[i];

        suma += tab[i];
    }

    *avg = (double)suma / n;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int *tab = (int *)malloc(n * sizeof(int));
    if (tab == NULL) {
        return 1; // błąd alokacji
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    int wynik_min, wynik_max;
    double wynik_avg;

    get_stats(tab, n, &wynik_min, &wynik_max, &wynik_avg);

    printf("min=%d max=%d avg=%.2f\n", wynik_min, wynik_max, wynik_avg);

    free(tab);
    tab = NULL;

    return 0;
}
