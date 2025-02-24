#include <stdio.h>
#include <math.h>

int main()
{
    int Ax = 3, Bx = 1, Cx = 4, Ay = 7, By = 5, Cy = 2;

    double AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));

    double AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));

    double BC = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));

    double pp = (AC + AB + BC) / 2.0;
    double S = sqrt(pp * (pp - AC) * (pp - AB) * (pp - BC));

    printf("Лицето на триъгълника е: %.2f\n", S);

    return 0;
}
