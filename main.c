// Zeller's Congruence computes the day of the week of a certain data (DD,MM,YYYY)

#include <stdio.h>

int main() {
    int q, m, year, k, j;
    int h;

    printf("Enter day: ");
    scanf("%d", &q);
    while (q<1||q>31){  //check if the year is correct
        printf("Enter a correct day: ");
        scanf("%d", &q);
    }

    printf("Enter month: ");
    scanf("%d", &m);
    while (m<1||m>12){ //check if the month is correct
        printf("Enter a correct month: ");
        scanf("%d", &m);
    }
    if (m==2 && q>29){  //special condition for february
        while (q<1||q>29){
            printf("Enter a day <= 29 for february: ");
            scanf("%d", &q);
        }
    }

    printf("Enter year: ");
    scanf("%d", &year);
    while (year<0) { //check if the year is correct
        printf("Enter a correct year: ");
        scanf("%d", &year);
    }
    while (m==2 && q==29 && ((year%4!=0&&year%100==0)||(year % 400 != 0))) { //if the year is not a leap year
        printf("%d is not a leap year, insert another year: ", year);
        printf("\n* Leap years are years that are exactly divisible by 4, except for years that are exactly divisible by 100, but these years are leap years if they are exactly divisible by 400\n");
        scanf("%d", &year);
    }

    if (m < 3) {
        m += 12;  //following Zeller's Congruence, if the months are January or February,
        year--;   //they must be counted not as 1 and 2, but as 13 and 14 of the previous year.
    }

    k = year % 100;  //obtaining the last 2 digits of the year
    j = year / 100;  //obtaining the century

    h = (q+(13*(m+1))/5+k+k/4+j/4+5*j)%7;

    printf("The day %d/%d/%d was/is going to be ", q, m, year);

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
