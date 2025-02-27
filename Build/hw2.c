#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define PRECISION 0.000001

// Function to compute factorial
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// Function to compute cosine using Taylor series
double cos_taylor(double x)
{
    double radian = x * PI / 180.0;
    double term, sum = 0;
    int n = 0;

    do
    {
        term = pow(-1, n) * pow(radian, 2 * n) / factorial(2 * n);
        sum += term;
        n++;
    } while (fabs(term) > PRECISION);

    return sum;
}

int main()
{
    double x;

    printf("Enter the value of x in cos(x) in degrees: ");
    scanf("%lf", &x);

    double result = cos_taylor(x);

    printf("Cos(%.6f) = %.6f\n", x, result);

    return 0;
}
