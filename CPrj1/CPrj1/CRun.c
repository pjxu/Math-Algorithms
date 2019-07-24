#include <stdio.h>
#include "MathAlrthm.h"

int main()
{
    printf_s("This Is a C Test Program\n");
    uint64_t ullNum1 = 0ULL;
    uint64_t ullNum2 = 0ULL;
    char optr = ' ';
    printf_s("First: ");
    scanf_s("%d", &ullNum1);
    printf_s("Second: ");
    scanf_s("%d", &ullNum2);
    printf_s("Operator: ");
    scanf_s(" %c", &optr);
    char sFilter[5] = "+-*/%";
    short sChk = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (optr == sFilter[i])
        {
            sChk = 1;
            break;
        }
        else
        {
            sChk = 0;
        }
    }
    if (sChk == 1)
    {
        uint64_t ullResult = 0ULL;
        switch (optr)
        {
        case '+':
            ullResult = MathAdd(ullNum1, ullNum2);
            break;
        case '-':
            ullResult = MathDeduct(ullNum1, ullNum2);
            break;
        case '*':
            ullResult = MathMultiply(ullNum1, ullNum2);
            break;
        case '/':
            ullResult = MathDivision(ullNum1, ullNum2);
            break;
        case '%':
            ullResult = MathModule(ullNum1, ullNum2);
            break;
        default:
            break;
        }
        printf_s("Result is %x\n", ullResult);
    }
    else
    {
        printf_s("Wrong Operator\n");
    }
    system("pause");
}