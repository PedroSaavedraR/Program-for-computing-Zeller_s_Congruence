// Zeller's Congruence computes the day of the week of a certain data (DD,MM,YYYY)

#include <stdio.h>

int main() {
    int q, m, year, k, j;
    int h;

    printf("Enter day: ");
    scanf("%d", &q);

    printf("Enter month: ");
    scanf("%d", &m);

    printf("Enter year: ");
    scanf("%d", &year);

    if (m < 3) {
        m += 12;  //following Zeller's Congruence, if the months are January or February,
        year--;   //they must be counted not as 1 and 2, but as 13 and 14 of the previous year.
    }

    k = year % 100;  //obtaining the last 2 digits of the year
    j = year / 100;  //obtaining the century

    h = (q+(13*(m+1))/5+k+k/4+j/4+5*j)%7;

    switch (h) {
        case 0:
            printf("Saturday");
            break;
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
    }

    return 0;
}
