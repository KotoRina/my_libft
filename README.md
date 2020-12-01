# My_Libft
Implementation of functions from a standard library

## Conversion from number to line / From line to number
- ft_atoi - convert a string to an integer
####
- ft_itoa - Allocates (with malloc(3)) and returns a stringrepresenting the integer received as an argument.Negative numbers must be handle

## Checking for value
- ft_isalpha - checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some locales, there may be additional characters for which isalpha()
####
- ft_isdigit - checks for a digit (0 through 9). 
####
- ft_isalnum - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
####
- ft_isascii - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. 
####
- ft_isprint - checks for any printable character including space. 
####
- ft_toupper - checks for an uppercase letter. 
####
- ft_tolower - checks for a lower-case character. 

## Displaying
- ft_putchar_fd - Outputs the character ’c’ to the given filedescriptor
####
- ft_putstr_fd - Outputs the string ’s’ to the given filedescriptor
####
- ft_putendl_fd - Outputs the string ’s’ to the given filedescriptor, followed by a newline
####
- ft_putnbr_fd - Outputs the integer ’n’ to the given filedescriptor

## Working with memory allocation
- ft_memset - The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.  
####
- ft_bzero - The bzero() function sets the first n bytes of the byte area starting at s to zero (bytes containing aq\0aq). 
####
- ft_memcpy - The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas should not overlap. Use memmove(3) if the memory areas do overlap. 
####
- ft_memccpy - The memccpy() function copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found. 
####
- ft_memchr - The memchr() function scans the first n bytes of the memory area pointed to by s for the character c. The first byte to match c (interpreted as an unsigned character) stops the operation. 
####
- ft_memcmp - The memcmp() function compares the first n bytes of the memory areas s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.  
####
- ft_memmove - The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest. 
####
- ft_calloc - calloc() allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free(). 
####
- ft_strdup - The strdup() function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3). 

## Working with strings
- ft_strlen - The strlen() function calculates the length of the string s, not including the terminating aq\0aq character
####
- ft_strlcpy
####
- ft_strlcat - functions copy and concatenate strings respectively. They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3). Unlike those functions, strlcpy ();
####
- ft_strchr - The strchr() function returns a pointer to the first occurrence of the character c in the string s
####
- ft_strrchr - The strrchr() function returns a pointer to the last occurrence of the character c in the string s
####
- ft_strnstr - function locates the first occurrence of the null-terminated string Fa little in the string Fa big , where not more than Fa len characters are searched. Characters that appear after a `\0' character are not searched.
####
- ft_strncmp - The strncmp() function is similar, except it only compares the first (at most) n characters of s1 and s2.  
####
- ft_substr - Allocates (with malloc(3)) and returns a substringfrom the string ’s’.The substring begins at index ’start’ and is ofmaximum size ’len
####
- ft_strjoin - Allocates (with malloc(3)) and returns a newstring, which is the result of the concatenationof ’s1’ and ’s2’
####
- ft_strtrim - Allocates (with malloc(3)) and returns a copy of’s1’ with the characters specified in ’set’ removedfrom the beginning and the end of the string
####
- ft_split- Allocates (with malloc(3)) and returns an arrayof strings obtained by splitting ’s’ using thecharacter ’c’ as a delimiter.  The array must beended by a NULL pointer

## Working with lists
- ft_lstnew - Allocates (with malloc(3)) and returns a newelement.  The variable ’content’ is initializedwith the value of the parameter ’content’.  Thevariable ’next’ is initialized to NULL
####
- ft_lstadd_front - Adds the element ’new’ at the beginning of thelist.
####
- ft_lstsize - Counts the number of elements in a list.
####
- ft_lstlast - Returns the last element of the list.
####
- ft_lstadd_back - Adds the element ’new’ at the end of the list
####
- ft_lstclear - Deletes and frees the given element and everysuccessor of that element, using the function ’del’and free(3).Finally, the pointer to the list must be set toNULL
####
- ft_lstdelone - Takes as a parameter an element and frees thememory of the element’s content using the function’del’ given as a parameter and free the element.The memory of ’next’ must not be freed
####
- ft_lstiter - Iterates the list ’lst’ and applies the function’f’ to the content of each element
