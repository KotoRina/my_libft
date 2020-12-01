# my_libft
Implementation of functions from a standard library

## Conversion from number to line / From line to number
- ft_atoi - convert a string to an integer
- ft_itoa

## Checking for value
- ft_isalpha - checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some locales, there may be additional characters for which isalpha()
- ft_isdigit - checks for a digit (0 through 9). 
- ft_isalnum - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)). 
- ft_isascii - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. 
- ft_isprint - checks for any printable character including space. 
- ft_toupper - checks for an uppercase letter. 
- ft_tolower - checks for a lower-case character. 

## Displaying
- ft_putchar_fd - writes the character c, cast to an unsigned char, to stream. 
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Working with memory allocation
- ft_memset - The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.  
- ft_bzero - The bzero() function sets the first n bytes of the byte area starting at s to zero (bytes containing aq\0aq).  
- ft_memcpy - The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas should not overlap. Use memmove(3) if the memory areas do overlap. 
- ft_memccpy - The memccpy() function copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. 
- ft_memchr - The memchr() function scans the first n bytes of the memory area pointed to by s for the character c. The first byte to match c (interpreted as an unsigned character) stops the operation. 
- ft_memcmp - The memcmp() function compares the first n bytes of the memory areas s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.  
- ft_memmove - The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.  
- ft_calloc - calloc() allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free(). 
- ft_strdup - The strdup() function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3). 

## Working with strings
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strnstr
- ft_strncmp

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split

## Working with lists
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstclear
- ft_lstdelone
- ft_lstiter
