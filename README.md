# ft_printf

<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/ft_printfe.png" alt="ft_printf 42 project badge"/>
</p>

For the ft_printf project of the 42 school cursus, we must recreate the famous C library printf function. This project teaches us about variadic arguments as well as structures if we plan to implement printf's extra flags.

- Supported conversions: %, c, s, p, i, d, u, x, X

## Usage

``make`` to compile.

### Basic Usage
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "./include/ft_printf.h"
#include "./include/libft.h"

int main(void)
{
    ft_printf("%d %c %d %s\n",1,'3',3,"7");
    return (0);
}

```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
gcc main.c libftprintf.a && ./a.out
```
Output should be:
```
1 3 3 7
```

The table below lists supported format specifiers:

<div align="center">
  <table>
    <thead>
      <tr> <th colspan="3"><h4>Specifiers</h4></th> </tr> 
      <tr> <th>Format Specifier</th> <th>Description</th>
      </tr> </thead>
    <tbody> 
      <tr> <td align="center">%</td> <td>% followed by another % character writes % to the screen.</td> 
      </tr> 
      <tr> <td align="center">c</td>
        <td>writes a single character.</td> </tr> 
      <tr> <td align="center">s</td> <td>writes a character string.</td> </tr>
      <tr> <td align="center">p</td> <td>writes an implementation-defined character sequence defining a pointer address.</td> </tr>
      <tr> <td align="center">d or i</td> <td>writes a signed integer to decimal representation.</td> </tr> 
      <tr> <td align="center">u</td> <td>writes an unsigned integer to decimal representation.</td> </tr>
      <tr> <td align="center">x or X</td> <td>writes an unsigned integer to hexadecimal representation.</td> </tr> 
    </tbody> </table>
</div>
