#include <stdio.h>

// Define structure with typedef Poly
typedef struct{
    int n;          // Degree of polynomial (n <= 20)
    double a[21];   // Coefficients a_0, a_1, ..., a_n
} Poly;

int main(void) {
    Poly p;
    Poly deriv;
    double a;

    // 1. Input degree and coefficients
    printf("Enter degree of polynomial n (<= 20): ");
    scanf("%d", &p.n);

    printf("Enter %d coefficients (from a_0 up to a_%d): ", p.degree + 1, p.degree);
for (int i = 0; i <= p.degree; i++) {
    scanf("%lf", &p.coeff[i]);
}

    printf("Enter the floating-point value a: ");
    scanf("%lf", &a);

    // 2. Part (i): Compute P(a) iteratively without using pow()
    double p_val = p.a[0];
    double x_term = a;  // First take x

    for (int i = 1; i <= p.n; i++) {
        p_val += p.a[i] * x_term;
        x_term *= a;    // Multiply by x in each subsequent iteration
    }

    printf("\n--- Results ---\n");
    printf("P(%.4f) = %.6f\n", a, p_val);

    // 3. Part (ii): Compute derivative into another Poly variable
    if (p.n == 0) {
        deriv.n = 0;
        deriv.a[0] = 0.0;
    } else {
        deriv.n = p.n - 1;
        for (int i = 1; i <= p.n; i++) {
            // Derivative of a_i * x^i is (i * a_i) * x^(i-1)
            deriv.a[i - 1] = i * p.a[i];
        }
    }

    // Print derivative polynomial
    printf("Derivative degree: %d\n", deriv.n);
    printf("P'(x) coefficients:\n");
    for (int i = 0; i <= deriv.n; i++) {
        printf("  b[%d] = %.4f\n", i, deriv.a[i]);
    }

    return 0;
}

