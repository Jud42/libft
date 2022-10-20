# libft
## Introduction
This project aims to discover and understand the small practical functions in C, to rewrite them and put them in a library called lift.a in order to reuse them effectively if necessary during the course at 42. Most of the functions are in LIBC with the same form and some in a different form.

**Program name** | libft.a
---- | -----
**Files to render** | Makefile, libft.h, ft_\*.c
**Makefile** | NAME, all, clean, fclean, re
**External functions allowed** | malloc() just for: calloc & strdup implementation
**Libft allowed** | no
**Descriptions** | Create your own library containing useful functions for the rest of your course.

### Libc functions to implement
• isalpha  
• isdigit  
• isalnum  
• isascii  
• isprint  
• strlen  
• memset  
• bzero  
• memcpy  
• memmove  
• strlcpy  
• strlcat  
• toupper  
• tolower  
• strchr  
• strrchr  
• strncmp  
• memchr  
• memcmp  
• strnstr  
• atoi
*---Malloc allowed---*
• calloc  
• strdup

### Additional functions (absent in the libc)
* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

## functions
**Functions name** |      **Prototype**      |      **Arguments**      |       **Descriptions**
---   |        ---        |       ---       |       ---       |
ft_isalpha | int ft_isalpha(int c) | c: an integer | checks if **c** is an alphabet character |  
ft_isdigit  | int ft_isdigit(int c) | c: an integer | checks if **c** is a digit (0 through 9) |
ft_isalnum  | int ft_isalnum(int c) | c: an integer | checks if **c** is an alphabet or digit (0 through 9) |
ft_isascii  | int ft_isascii(int c) | c: an integer | checks whether **c** is a 7-bit unsigned char value that fits into the ASCII character set |
ft_isprint  | int ft_isprint(int c) | c: an integer | checks if **c** is any printable character including space |
ft_strlen  | size_t ft_strlen(const char \*s) | s: pointer to a string of character | calculates the length of the string pointed to by **s**, excluding the terminating null byte ('\0') |
ft_memset  | void \*ft_memset(void \*b, int c, size_t len) | b: pointer to any type of variable, c: value byte, len: length byte | fills the first **len** bytes of the memory area pointed to by **b** with byte **c** |
ft_bzero  | void ft_bzero(void \*s, size_t n) | s: pointer to any type of variable, n: length byte | Erases  the data in the **n** bytes of the memory starting at the location pointed to by **s**, by writing zeros (bytes containing '\0') to  that area |
ft_memcpy  | void \*ft_memcpy(void \*dst, const void \*src, size_t n) | dst: pointer to any type of variable, src: pointer to any type of variable, n: length byte | copies **n** bytes from memory area **src** to memory area **dst**.  The memory areas must not overlap. |
ft_memmove  | void \*ft_memmove(void \*dst, const void \*src, size_t n) | dst: pointer to any type of variable, src: pointer to any type of variable, n: length byte | copies **n** bytes from memory area **src** to memory area **dest**.  The memory areas may overlap: copying takes place as though the bytes in  **src** are first copied into a temporary array that does not overlap **src** or **dest**, and the bytes are then copied from the temporary array to **dest**. |
ft_strlcpy  | size_t ft_strlcpy(char \*dst, const char \*src, size_t dstsize) | dst: pointer to a string of character, src: pointer to a string of character, dstsize: length byte | copies up to **dstsize** - 1 characters from the NUL-terminated string **src** to **dst**, NUL-terminating the result |
ft_strlcat  | size_t ft_strlcat(char \*dst, const char \*src, size_t dstsize) | dst: pointer to a string of character, src: pointer to a string of character, dstsize: length byte | Appends the NUL-terminated string **src** to the end of **dst**.  It will append at most **dstsize** - strlen(**dst**) - 1 bytes, NUL-terminating the result |
ft_toupper  | int ft_toupper(int c) | c: an integer | convert (**c**) lowercase letters to uppercase |
ft_tolower  | int ft_tolower(int c) | c: an integer | convert (**c**) uppercase letters to lowercase |
ft_strchr  | char \*ft_strchr(const char \*s, int c) | s: pointer to a string of character, c: an integer | look for the first occurrence of the character (char)**c** in the string **s**, and return a pointer to it. Else null is returned if (char)**c** is not found  |
ft_strrchr  | char \*ft_strrchr(const char \*s, int c)  | s: pointer to a string of character, c: an integer | look for the last occurrence of the character (char)**c** in the string **s**, and return a pointer to it. Else null is returned if (char)**c** is not found |
ft_strncmp  | int ft_strncmp(const char \*s1, const char \*s2, size_t n) | s1: a pointer to the first string of character, s2: a pointer to the second string of character, n: length byte | compares only the first (at most) **n** bytes of **s1** and **s2** |
ft_memchr  | void \*ft_memchr(const void \*s, int c, size_t n) | s: pointer to any type of variable, c: an integer, n: length byte | scans the initial **n** bytes of the memory area pointed to by **s** for the first instance of **c**.  Both **c** and the bytes of the memory area pointed to by **s** are interpreted as unsigned char |
ft_memcmp  | int ft_memcmp(const void \*s1, const void \*s2, size_t n) | s1: a pointer to the first type of variable, s2: a pointer to the second type of variable, n: length byte |  compares the first **n** bytes (each interpreted as unsigned char) of the memory areas **s1** and **s2**|
ft_strnstr  | char \*ft_strnstr(const char \*str, const char \*substr, size_t len) | str: a pointer to the string of character, substr: a pointer to the string of character, len: length byte | locates the first occurrence of the null-terminated string **substr** in the string **str**, where not more than **len** characters are searched. Characters that appear after a ‘\0’ character are not searched |
ft_atoi | int ft_atoi(const char \*str) | str: pointer to a string of character | Convert the string of character pointed to by **str** to an integer |
ft_calloc  | void \*ft_calloc(size_t count, size_t size) | count: number elements of array, size: number byte of each element | Allocates memory for an array of **count** elements of **size** bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If **count** or **size** is 0, then calloc() returns either NULL |
ft_strdup | char \*ft_strdup(const char \*s1) | s1: a pointer to the string of character copied | returns a pointer to a new string which is a duplicate of the string **s1** |
ft_substr | char \*ft_substr(char const \*s, unsigned int start, size_t len | s: The string from which to extract the news chain, start: The start index of the new string in the string '**s**', len: The maximum size of the new string | Allocates (with malloc(3)) and returns a string of characters from the string '**s**'. This new string starts at index '**start**' and has maximum size '**len**' |
ft_strjoin | char \*ft_strjoin(char const \*s1, char const \*s2 | s1: The prefix string, s2: The suffix string | Allocates (with malloc(3)) and returns a new string, result of the concatenation of **s1** and **s2** |
ft_strtrim | char \*ft_strtrim(char const \*s1, char const \*set | s1: The string to trim, set: The reference set of characters to trim | Allocates (with malloc(3)) and returns a copy of the string '**s1**', without the specified characters in '**set**' at the beginning and end of the string characters |
ft_split | char \*\*ft_split(char const \*s, char c) | s: The string to split, c: The delimiter character | Allocate (with malloc(3)) and return an array of character strings obtained by separating ’**s**’ at using the '**c**' character, used as a delimiter. The array must be null terminated |
ft_itoa | char \*ft_itoa(int n) | n: The integer to convert | Allocate (with malloc(3)) and return a string of characters representing the integer '**n**' received in argument. Negative numbers should be handled |
ft_strmapi | char \*ft_strmapi(char const \*s, char (\*f)(unsigned  int, char) | s: a string to iterate over, f: The function to apply to each characte r | Applies the '**f**' function to each character in the character '**s**' passed as an argument to create a new string (with malloc(3)) resulting from the successive applications of '**f**' |
ft_striteri | void ft_striteri(char \*s, void (\*f)(unsigned int,  char*)) | s: The string to iterate over, f: The function to apply to each character | Applies the '**f**' function to each character in the character **s** passed as argument, and passing its index as the first argument. Each character is passed by address to '**f**' to be modified if necessary |
ft_putchar_fd | void ft_putchar_fd(char c, int fd | c: The character to write, fd: The file descriptor to write to | Writes the character '**c**' to the file descriptor given |
ft_putstr_fd | void ft_putstr_fd(char \*s, int fd | s: The string of character to write, fd: The file descriptor to write to | Writes the string of character '**s**' to the file descriptor given |
ft_putendl_fd | void ft_putendl_fd(char \*s, int fd) | s: The string of character to write, fd: The file descriptor to write to | Writes the string '**s**' to the file descriptor given and followed newline |
ft_putnbr_fd | void ft_putnbr_fd(int n, int fd) | n: The integer to write, fd: The file descriptor to write to | Writes the integer '**n**' to the file descriptor given |