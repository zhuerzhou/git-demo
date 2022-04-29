#include <stdio.h>
int main(void)
{
struct
{
 int num;
 int score;
 struct Student*next;
}student1;
printf("%o",&student1);
return 0;
}