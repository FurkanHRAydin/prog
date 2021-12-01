#include <time.h>
#include <stdio.h>

int main(void) {
 time_t time[] = {645703200};
 time_t time1[] = {49888800};

 printf("Time = %s", ctime(&time[0]));
 printf("Time = %s", ctime(&time1[0]));
 return 0;
}