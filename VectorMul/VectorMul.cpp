#include "VectorMul.h"

void vector_mul(const double* a, const double* b, double* out, int size)
{
    for (int i = 0; i < size; ++i)
    {
        out[i] = a[i] * b[i];
    }
}
