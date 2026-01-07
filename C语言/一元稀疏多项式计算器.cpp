#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int coeff;  
    int exp;    
} Term;

void mergePolynomial(Term *poly1, int n, Term *poly2, int m, Term *res, int *res_len, int t) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (poly1[i].exp < poly2[j].exp) {
            res[k++] = poly1[i++];
        } else if (poly1[i].exp > poly2[j].exp) {
            res[k].coeff = t ? -poly2[j].coeff : poly2[j].coeff;
            res[k].exp = poly2[j].exp;
            k++;
            j++;
        } else {
            int c = poly1[i].coeff + (t ? -poly2[j].coeff : poly2[j].coeff);
            if (c != 0) {
                res[k].coeff = c;
                res[k].exp = poly1[i].exp;
                k++;
            }
            i++;
            j++;
        }
    }
    while (i < n) {
        res[k++] = poly1[i++];
    }
    while (j < m) {
        res[k].coeff = t ? -poly2[j].coeff : poly2[j].coeff;
        res[k].exp = poly2[j].exp;
        k++;
        j++;
    }
    *res_len = k;
}

void printPolynomial(Term *poly, int len) {
    if (len == 0) {
        printf("0\n");
        return;
    }
    int first_term = 1; 
    for (int i = 0; i < len; i++) {
        int coeff = poly[i].coeff;
        int exp = poly[i].exp;
        if (coeff == 0) continue;

        if (first_term) {
            first_term = 0;
            if (coeff < 0) {
                printf("-");
            }
        } else {
            if (coeff > 0) {
                printf("+");
            } else {
                printf("-");
            }
        }
        int abs_coeff = abs(coeff);
        if (abs_coeff != 1 || exp == 0) {
            printf("%d", abs_coeff);
        }
        if (exp != 0) {
            printf("x");
            if (exp != 1) {  
                printf("^%d", exp);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);
    Term *poly1 = (Term *)malloc(n * sizeof(Term));
    Term *poly2 = (Term *)malloc(m * sizeof(Term));
    Term *res = (Term *)malloc((n + m) * sizeof(Term));
    int res_len;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &poly1[i].coeff, &poly1[i].exp);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &poly2[i].coeff, &poly2[i].exp);
    }
    mergePolynomial(poly1, n, poly2, m, res, &res_len, t);
    printPolynomial(res, res_len);\
    free(poly1);
    free(poly2);
    free(res);
    return 0;
}
