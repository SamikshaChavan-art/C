#include <stdio.h>
extern int ext_var;
void print()
{
    printf("%d", ext_var);
}
int main()
{
    print();
    return 0;
}