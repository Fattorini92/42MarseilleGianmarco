*This activity has been created as part of the 42 curriculum by <gfattori>.*

Libft

Description....

Libft is a C library. The goal of the project is to re-implement a set
of standard C library functions, write additional utility functions, and manage
linked lists, then package everything in a static library (`libft.a`) that can be
reused in future projects.

Instructions....

  Compilation.

All files are compiled with `cc -Wall -Wextra -Werror`.

make        # builds libft.a at the root of the repository
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean followed by all


Usage in a program..

Include the header and link the library:

#include "libft.h"

int	main(void)
{
	ft_putendl_fd("hello", 1);
	return (0);
}

in terminal

cc -Wall -Wextra -Werror main.c -L. -lft -o main


Put `-L. -lft` after the source files that use the library.
If `libft.h` is in another folder, add `-I<folder>`.

Also possible to do

cc main.c libft.a -o main

this works directly with the created library only if its in the same folder.

Resources....

References...

- Linux man pages (`man strlen`, `man memmove`, `man calloc`, `man write`, ...)
- *The C Programming Language*, Kernighan and Ritchie
Youtube guides 

Use of AI

to compare and check for errors 
to find the workarounds in windows to have a work environment

Library Description....

The library is organized in three parts:

Part 1 - Libc functions

Re-implementations of standard functions with the same prototypes and behavior
as the originals (prefixed with `ft_`).

| Category | Functions |
|---|---|
| Character tests and conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Raw memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Conversion | `ft_atoi` |

Part 2 - Additional functions

Functions that are not in the libc, or that exist in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of `s`, starting at `start`, of at most `len` characters. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Returns a copy of a string with the characters of a given set removed from both ends. |
| `ft_split` | Splits a string using a delimiter character; returns a `NULL`-terminated array of strings. |
| `ft_itoa` | Converts an integer (including negatives and `INT_MIN`) to a string. |
| `ft_strmapi` | Applies a function to each character (with its index) and returns the new string. |
| `ft_striteri` | Applies a function to each character (index and address) in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

Part 3 - Linked list

Functions to manipulate lists built from the following structure, declared in
`libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes of the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (with `del`) and the node itself. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Builds a new list from the results of a function applied to each node's content. |
