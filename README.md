##  Libft

The aim of this project is to recreate commonly used built-in C standard library functions. These functions are to be used for future WeThinkCode_ projects in C programming language. Additional useful functions that are not foumd in the C standard library have also been added to Libft.

## Table of contents
* [General info](#general-info)
* [Technologies](#technologies)
* [Libft functions](#libft-functions)
* [Setup](#setup)
* [Concepts learned](#concepts-learned)

## General info
Libft is the first project that software engineering trainees do at WeThinkCode_. Trainees are forbidden from using built-in C standard library functions.

## Technologies
Technologies are used in this project are C programming language and vim as a text editor.

## Libft functions

* Libc functions: Some of the functions from the C standard library.
* Additional function: Functions not found in the C standard library but shoulb be included in Libft.
* Bonusfunctions: Useful functions for linked list manipulation.
* Personal functions: Functions I have added when doing C projects.

| Libc function | Additional function | Bonus function | Personal function |
|   :---:      |     :---:      |   :---:       |   :---:      |
| memset   | ft_memalloc     | ft_lstnew    | ft_atoi_l   |
| bzero     | ft_memdel       | ft_lstadd      | ft_itoa_base   |
| memcpy   | ft_strnew     |                  | ft_itoa_base_max   |
| memccpy     | ft_strdel       |             | ft_numlen_max   |
| memmove   | ft_strclr     |              | ft_strjoin_mod   |
| memchr     | ft_striter       |           | ft_strjoinfree   |
| memcmp   | ft_striteri     |               | ft_strupper   |
| strlen     | ft_strmap       |              | ft_wstrlen   |
| strdup   | ft_strmapi     |                 |    |
| strcpy     | ft_strequ       |              |    |
| strncpy   | ft_strnequ     |                |    |
| strcat     | ft_strsub       |              |    |
| strncat   | ft_strjoin     |              |    |
| strlcat     | ft_strtrim       |          |    |
| strchr   | ft_strsplit     |              |    |
| strrchr     | ft_itoa       |             |    |
| strstr   | ft_putchar     |              |    |
| strnstr     | ft_putstr       |           |    |
| strcmp   | ft_putendl     |               |    |
| strncmp     | ft_putnbr       |         |    |
| atoi   | ft_putchar_fd     |            |    |
| isalpha     | ft_putstr_fd       |       |    |
| isdigit   | ft_putendl_fd     |         |    |
| isalnum     | ft_putnbr_fd       |       |    |
| isascii   |                    |      |    |
| isprint     |                   |       |    |
| toupper   |                 |          |    |
| tolower     |                |        |    |

## Setup
To run this project, install it locally
```
$ git clone https://github.com/Sakhile-Msibi/Libft
$ cd libft
$ make
```

## Concepts learned
* Pointers: Accessing characters in a string using pointers.
* Memory management: Freeing memory allocated using malloc.
* String manipulation.
* Creating and adding nodes on a link list.
