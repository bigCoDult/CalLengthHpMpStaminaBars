#include <stdio.h>
#include <cmath> //pow에 필요
#pragma warning(disable:4996)
#include <windows.h> //system("mode con cols=41 lines=41");에 필요
//60 40 25
//60 35 15
//50 30 15

int main()
{
    system("mode con cols=41 lines=41");
    int n = 1;
    double vigor = 0, mind = 0, endur = .0, hp = 0, fp = 0, sta = 0;
    double hpLength = 1, fpLength = 1, staLength = 1;

retry:;
    printf("----------------------------------------\n");
    printf("[%d번째 계산]\n",n);
    printf("type your vigor, mind, endur = ");
    vigor = 10, mind = 10, endur = 10;
    //scanf_s("%lf%lf%lf", &vigor, &mind, &endur);
    
    printf("------------------\n");
    printf("vigor = %.0lf\n", vigor);
    if (vigor > 60)
    {
        vigor = (1900 + (200 * (1 - pow((1 - ((vigor - 60) / 39)), 1.2))));
    }
    else if (vigor > 40)
    {
        vigor = (1450 + (450 * (1 - pow((1 - ((vigor - 40) / 20)), 1.2))));
    }
    else if (vigor > 25)
    {
        vigor = (800 + (650 * pow(((vigor - 25) / 15), 1.1)));
    }
    else
    {
        vigor = (300 + (500 * pow(((vigor - 1) / 24), 1.5)));
    }
    hp = vigor;
    hpLength = hp * 650 / 1606;
    printf("hp = %.0lf\n", hp);
    printf("hpLength = %.0lf px\n", hpLength);
    printf("------------------\n");
    printf("mind = %.0lf\n", mind);

    if (mind > 60)
    {
        mind = (350 + (100 * ((mind - 60) / 39)));
    }
    else if (mind > 35)
    {
        mind = (200 + (150 * (1 - pow((1 - ((mind - 35) / 25)), 1.2))));
    }
    else if (mind > 15)
    {
        mind = (95 + (105 * ((mind - 15) / 20)));
    }
    else
    {
        mind = (50 + (45 * ((mind - 1) / 14)));
    }
    fp = mind;
    fpLength = fp * 582 / 333;
    printf("fp = %.0lf\n", fp);
    printf("fpLength = %.0lf px\n", fpLength);
    printf("------------------\n");
    printf("endur = %.0lf\n", endur);
    if (endur > 50)
    {
        endur = (155 + (15 * ((endur - 50) / 49)));
    }
    else if (endur > 30)
    {
        endur = (130 + (25 * ((endur - 30) / 20)));
    }
    else if (endur > 15)
    {
        endur = (105 + (25 * ((endur - 15) / 15)));
    }
    else
    {
        endur = (80 + (25 * ((endur - 1) / 14)));
    }
    sta = endur;
    staLength = sta * 510 / 170;
    printf("sta = %.0lf\n", sta);
    printf("staLength = %.0lf px\n", staLength);
    printf("------------------\n");
    double hR = (hpLength / staLength), fR = (fpLength / staLength), sR = 1;
    //double hR = (hpLength / staLength), fR = (fpLength / staLength), sR =1;
    printf("%lf %lf %lf\n", &hR, &fR, &sR);
    //printf("HP Length : FP Length : STA Length\n= %.2lf : %.2lf : %.2lf\n", &hR, &fR , &sR);

    n =n+ 1;
    //goto retry;
}