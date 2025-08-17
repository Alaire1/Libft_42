# ft_libft

**ft_libft** is a custom implementation of a subset of the C standard library functions.  
This repository contains the **mandatory part only** (no bonus functions).

---

## 📦 Description

`libft` is a library created during the 42 school curriculum to:

- Reimplement standard C library functions from scratch.
- Practice memory management, pointer manipulation, and string handling.
- Provide a personal reusable library for future projects.

This version includes only the mandatory functions, which cover common operations on:

- Strings
- Memory
- Characters
- Output

---

## 🔹 Functions Implemented

The following categories of functions are included:

### **Character Checks**
- `ft_isalpha` – check if a character is alphabetic
- `ft_isdigit` – check if a character is a digit
- `ft_isalnum` – check if a character is alphanumeric
- `ft_isascii` – check if a character is an ASCII character
- `ft_isprint` – check if a character is printable

### **String and Memory**
- `ft_strlen` – calculate the length of a string
- `ft_memset` – fill a memory area with a constant byte
- `ft_bzero` – set a memory area to zero
- `ft_memcpy` – copy memory area
- `ft_memmove` – copy memory safely, allowing overlapping
- `ft_strlcpy` – copy string with size limit
- `ft_strlcat` – concatenate strings with size limit
- `ft_strchr` – locate first occurrence of a character in a string
- `ft_strrchr` – locate last occurrence of a character
- `ft_strncmp` – compare strings up to n characters
- `ft_memchr` – locate byte in memory
- `ft_memcmp` – compare memory areas
- `ft_strnstr` – locate substring in a string

### **Conversion**
- `ft_atoi` – convert string to integer
- `ft_tolower` – convert character to lowercase
- `ft_toupper` – convert character to uppercase

### **Memory Allocation**
- `ft_calloc` – allocate memory and set it to zero
- `ft_strdup` – duplicate a string

---

## ⚙️ Compilation

To compile your library:
```bash
make
```

## 📝 Usage

1. Include the header in your project:
```
#include "libft.h"
```
2. Link the library during compilation:
```bash
gcc main.c -L. -lft -o my_program
```
-  `L.` → library is in the current directory

- `lft` → link libft.a

## 🧪 Testing

You can test each function by creating a main.c and compiling it with libft.a.
Example of a `main.c`:
```C
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, world!";
    printf("%zu\n", ft_strlen(str));
    return 0;
}
```

