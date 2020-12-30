//link : https://www.acmicpc.net/problem/1924

#include <stdio.h>

int main(void){
    int month, date, day, a;
    day=0;
    scanf("%d %d", &month, &date);
    for(a=1;a<month;a++){
        switch(a){
            case 1:
                day+=31;
                break;
            case 2:
                day+=28;
                break;
            case 3:
                day+=31;
                break;
            case 4:
                day+=30;
                break;
            case 5:
                day+=31;
                break;
            case 6:
                day+=30;
                break;
            case 7:
                day+=31;
                break;
            case 8:
                day+=31;
                break;
            case 9:
                day+=30;
                break;
            case 10:
                day+=31;
                break;
            case 11:
                day+=30;
                break;
            case 12:
                day+=31;
                break;
            default:
                break;
        }
    }
    day+=date;
    switch(day%7){
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
        default:
            break;
    }
    
     return 0;
}
