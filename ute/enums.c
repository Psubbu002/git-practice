#include <stdio.h>
enum Day 
{
    SUNDAY,     // 0
    MONDAY,     // 1
    TUESDAY,    // 2
    WEDNESDAY,  // 3
    THURSDAY,   // 4
    FRIDAY,     // 5
    SATURDAY    // 6
};
int main() 
{
    enum Day today = WEDNESDAY;
    if (today == WEDNESDAY) 
    {
        printf("Midweek!\n");
    }
    return 0;
}