#include <stdio.h>
#include <stdlib.h>


int main()
{
   printf(" enter a 2 digit number:");
    int x, z, y;
    scanf("%d",&x);
    z = x / 10;
    y = x % 10;
    printf("%d %d\n", z, y);
    if (z == 1 && y > 0){
        switch(y){
        case 9:
            printf("ninteen");
            break;
        case 8:
            printf("eighteen");
            break;
        case 7:
            printf("seventeen");


        case 6:
            printf("sixteen");
            break;
        case 5:
            printf("fifteen");
            break;
        case 4:
            printf("forteen");
            break;
        case 3:
            printf("thirteen");
            break;
        case 2:
            printf("twelf");
            break;
        case 1:
            printf("elevn");
            break;
        case 0:
            printf("ten");
        }
    } else{
    switch (z){
        case 9:
            printf("ninty-");
            break;
        case 8:
            printf("eighty-");
            break;
        case 7:
            printf("seventy-");
            break;
        case 6:
            printf("sixty-");
            break;
        case 5:
            printf("fifty-");
            break;
        case 4:
            printf("forty-");
            break;
        case 3:
            printf("thirty-");
            break;
        case 2:
            printf("twenty-");
            break;
        case 0:
             printf("");
    }
    switch (y){
        case 9:
            printf("nine");
            break;
        case 8:
            printf("eight");
            break;
        case 7:
            printf("seven");
            break;
        case 6:
            printf("six");
            break;
        case 5:
            printf("five");
            break;
        case 4:
            printf("four");
            break;
        case 3:
            printf("three");
            break;
        case 2:
            printf("two");
            break;
        case 1:
            printf("one");
            break;
    }
    }
}
