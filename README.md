
# 0x11. C - printf

The printf() family produce output according to a format as described below.  The function printf() write output to stdout, the standard output stream;

All of these functions write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

## Usage/Examples

```c
#include "main.h"

int main(void){
    _printf("this is %i of %c the printf example %s\n",1,'a',"code");
}
```


## Implemented specefiers


- % : ```_printf("%%");```
- d : ```_printf("%d", 10);```
- i : ```_printf("%i", 50);```
- c : ```_printf("%c", 'Q');```
- s : ```_printf("%s", "Hello, printf");```

## Authors

- [@Shenouda Mikhael](https://github.com/shenoudaMikhael)
- [@Salsabil Ahamed](https://github.com/salsapil)
