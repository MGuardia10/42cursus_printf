# 42madrid - ft_printf
The ft_printf project aims to reproduce the behaviour of the C standard library's function `printf()`.

![C](https://img.shields.io/badge/C-a?style=for-the-badge&logo=C&color=grey)

You can see the subject [**HERE**](https://github.com/MGuardia10/42cursus/blob/main/subjects/en/printf_subject_en.pdf)

## Supported Conversion Specifiers
It supports the following conversion specifiers:

|Specifier|Output|
|---|---|
|`%c`|Single character|
|`%s`|String|
|`%p`|Pointer address|
|`%d`|decimal (base 10) number|
|`%i`|Integer in base 10|
|`%u`|Unsigned decimal (base 10) number|
|`%x`|Unsigned hexadecimal (lowercase)|
|`%X`|Unsigned hexadecimal (uppercase)|

## Getting Started:

1- Clone this repository
	
	git clone https://github.com/MGuardia10/42cursus_printf.git
2- Navigate to the new directory and run `make`
	
	cd 42cursus_printf
   	make
This will generate a `.a` file that you can link to your C projects.

3- `make clean` to remove the object files and work on a cleaner directory

	make clean
4- include the `ft_printf.h` header file in your C source files and compile your program with the `.a` file. A usage example of the ft_printf function:
```C
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    return (0);
}
```

## Compiling options
The ft_printf function comes with a Makefile that includes the following rules:

- `all`: compiles the library
- `re`: recompiles the library
- `clean`: removes all object files
- `fclean`: removes all object files and `.a` file

## Disclaimer
> At [42School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the [Norm](https://github.com/MGuardia10/42cursus/blob/main/subjects/en/norm_en.pdf), the school's coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.
