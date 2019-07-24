#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

typedef unsigned long long  uint64_t;

uint64_t MathAdd(uint64_t ullNum1, uint64_t ullNum2)
{
    return (ullNum1 + ullNum2);
}

uint64_t MathDeduct(uint64_t ullNum1, uint64_t ullNum2)
{
    uint64_t ullDctResult = 0ULL;
    if (ullNum1 > ullNum2)
    {
        ullDctResult = ullNum1 - ullNum2;
    }
    else
    {
        ullDctResult = ullNum2 - ullNum1;
    }
    return ullDctResult;
}

uint64_t MathMultiply(uint64_t ullNum1, uint64_t ullNum2)
{
    return (ullNum1 * ullNum2);
}

uint64_t MathDivision(uint64_t ullNum1, uint64_t ullNum2)
{
    uint64_t ullDivResult = 0ULL;
    if (ullNum1 > ullNum2)
    {
        ullDivResult = ullNum1 / ullNum2;
    }
    else
    {
        ullDivResult = ullNum2 / ullNum1;
    }
    return ullDivResult;
}

uint64_t MathModule(uint64_t ullNum1, uint64_t ullNum2)
{
    uint64_t ullModResult = 0ULL;
    if (ullNum1 > ullNum2)
    {
        ullModResult = ullNum1 % ullNum2;
    }
    else
    {
        ullModResult = ullNum2 % ullNum1;
    }
    return ullModResult;
}

#ifdef __cplusplus
}
#endif
