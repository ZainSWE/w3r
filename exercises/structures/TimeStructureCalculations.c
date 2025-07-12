#include <stdio.h>

typedef struct Time {

    int hours;
    int minutes;
    int seconds;

} Time;

int main () {

    struct Time t1, t2;
    char line[255];
    int rHours, rMinutes, rSeconds;

    printf("Input the first time: (hours minutes seconds): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Input the second time: (hours minutes seconds): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    rSeconds = t1.seconds + t2.seconds;
    rMinutes = t1.minutes + t2.minutes + rSeconds / 60;
    rHours = t1.hours + t2.hours + rMinutes / 60;

    rSeconds %= 60;

    printf("\nResultant Time: %d:%d:%d\n", rHours, rMinutes, rSeconds);

    return 0;
}
