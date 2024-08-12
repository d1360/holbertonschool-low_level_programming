# Low Level Programming

This repository contains projects and exercises related to low-level programming, focusing on C programming and the use of the Betty style guide.

## Functions

### `_abs`

The `_abs` function computes the absolute value of an integer.

**Prototype**: `int _abs(int n);`

**File**: `functions_nested_loops/6-abs.c`

**Usage Example**:

```c
#include "main.h"

int main(void)
{
    int r;

    r = _abs(-1);  /* r will be 1 */
    r = _abs(0);   /* r will be 0 */
    r = _abs(1);   /* r will be 1 */
    r = _abs(-98); /* r will be 98 */
    return (0);
}

