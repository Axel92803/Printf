#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1, ret2;

    printf("--- Testing %%x ---\n");
    ret1 = ft_printf("ft: [%x]\n", 255);
    ret2 = printf("pf: [%x]\n", 255);
    printf("Returns: ft=%d, pf=%d\n\n", ret1, ret2);

    return 0;
}