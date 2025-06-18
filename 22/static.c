#include <stdio.h>
int count()
{
    int count = 0;
    count++;
    printf("%d", count);
}
int main()
{
    count();
    count();
    return 0;
}
// when count() was called for second time it will not preserve it's
//  value generally but use of static variable will preserve its value even if it is out of scope 