
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, r1, r2, realPart, imagPart;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation (a must be non-zero).\n");
        return 0;
    }

    D = (b * b) - (4 * a * c);

    printf("\nDiscriminant (D) = %.2lf\n", D);

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are REAL and DISTINCT.\n");
        printf("Root 1 = %.4lf\n", r1);
        printf("Root 2 = %.4lf\n", r2);
    }
    else if (D == 0) {
        r1 = -b / (2 * a);
        printf("Roots are REAL and EQUAL.\n");
        printf("Root 1 = Root 2 = %.4lf\n", r1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("Roots are COMPLEX (Imaginary).\n");
        printf("Root 1 = %.4lf + %.4lfi\n", realPart, imagPart);
        printf("Root 2 = %.4lf - %.4lfi\n", realPart, imagPart);
    }

    return 0;
}
