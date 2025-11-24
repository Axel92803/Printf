#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1, ret2;

    // Compare your ft_printf with real printf
    printf("--- Testing %%s ---\n");
    ret1 = ft_printf("ft: [%s]\n", "hello");
    ret2 = printf("pf: [%s]\n", "hello");
    printf("Returns: ft=%d, pf=%d\n\n", ret1, ret2);

    printf("--- Testing %%d ---\n");
    ret1 = ft_printf("ft: [%d]\n", -42);
    ret2 = printf("pf: [%d]\n", -42);
    printf("Returns: ft=%d, pf=%d\n\n", ret1, ret2);

    printf("--- Testing %%x ---\n");
    ret1 = ft_printf("ft: [%x]\n", 255);
    ret2 = printf("pf: [%x]\n", 255);
    printf("Returns: ft=%d, pf=%d\n\n", ret1, ret2);

    printf("--- Testing %%p ---\n");
    char *ptr = "test";
    ret1 = ft_printf("ft: [%p]\n", ptr);
    ret2 = printf("pf: [%p]\n", ptr);
    printf("Returns: ft=%d, pf=%d\n\n", ret1, ret2);

    // Edge cases
    printf("--- Edge Cases ---\n");
    ft_printf("NULL string: [%s]\n", NULL);
    ft_printf("NULL pointer: [%p]\n", NULL);
    ft_printf("INT_MIN: [%d]\n", -2147483648);

    return 0;
}