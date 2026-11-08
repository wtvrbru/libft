
*This project has been created as part of the 42 curriculum by rtouirta.*

************************************************************

# DESCRIPTION

`Libft` is a C library that reimplements standard libc functions and adds some extra utilities. The goal is to understand how these functions work and to build a reusable library (`libft.a`) for future 42 projects.

# INSTRUCTIONS

the functions are compiled with `cc -Wall -Wextra -Werror`. 
to build the library we use the `make` command in the terminal . using `make` will create `object files` of all functions `(.o)` and static library `libft.a`.

# RESOURCES 

all the infos were from multiple resources which are : the man page for each function, google, youtube, w3schools, Wikipedia, AI.

obviously AI helped me a lot in my journey in different ways, to get additional infos abt the functions, explaining concepts like "how memmove handles overlapping in memory ....", getting hints on any bugs or any edge cases that i might no be aware of.
I wrote all the codes myself.

# ADDITIONAL DESCRIPTION

Here is a short description of each group of functions in the library.

**ft_is\*** : these check if a character fits a category (letter, digit, letter or digit, ASCII, printable). For example `ft_isdigit` checks if the character is a digit. They return 1 if it fits and 0 if it doesn't.

**ft_to\*** : `ft_toupper` and `ft_tolower` change a letter to uppercase or lowercase. If the character is not a letter, it is returned without any change.

**ft_mem\*** and **ft_bzero** : these work on raw memory, byte by byte. They can fill, copy, compare or search a number of bytes given as a parameter. The pointers are cast to `unsigned char` so each byte can be handled one by one. `ft_memmove` is safe when the source and destination overlap, but `ft_memcpy` is not. `ft_bzero` fills the memory with zeros and returns nothing. The return value of the others depends on the function.

**ft_str\*** : these are the string functions. Each one does something different (get the length, search a character or a substring, compare, copy, join, trim, duplicate, cut a part), but they all work on strings. The ones that create a new string use `malloc` and return `NULL` if the allocation fails.

**ft_atoi** and **ft_itoa** : `ft_atoi` converts a string of digits into an integer. `ft_itoa` does the opposite: it converts an integer into a string, and returns `NULL` if the allocation fails.

**ft_calloc** : it allocates memory like `malloc`, but it multiplies the two parameters (number of elements and size of each) for you, and fills all the memory with zeros. It returns the allocated pointer.

**ft_split** : it cuts a string every time it finds the separator character (the second parameter) and puts each piece in an array of strings. The array is returned and ends with a `NULL` pointer.

**ft_put\*_fd** : these write a character, a string, a string with a newline, or a number to the file descriptor given as a parameter. They return nothing.

**ft_lst\*** : these work on a linked list. They create, add, count, find, delete and copy nodes, and can apply a function on every node. The list structure `t_list` is declared in `libft.h`. The functions that create nodes return `NULL` if the allocation fails.