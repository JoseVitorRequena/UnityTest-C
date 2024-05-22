#include "UnityTest.h"
#include <stdio.h>
#include <stdarg.h>

// va_list, va_start, va_arg e va_end
// int assert(void (*func)(), int num_args, ...){
//     va_list args;
//     va_start(args, num_args);
//     return 0;
// }

int assert(void (*func)()){
    func();
    return 0;
}