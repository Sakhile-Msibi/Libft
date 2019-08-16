NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

HEADER =

SRCS = ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memchr.c \
	  ft_memcmp.c ft_memccpy.c ft_memmove.c ft_memset.c \
	  ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
	  ft_strdup.c ft_strlcat.c ft_strlen.c ft_wstrlen.c ft_strncat.c \
	  ft_strncmp.c ft_strncpy.c ft_strrchr.c ft_atoi.c ft_atoi_l.c \
	  ft_strstr.c ft_tolower.c ft_toupper.c  ft_strupper.c ft_strnstr.c\
	  ft_putchar.c ft_putstr.c ft_putnbr.c ft_itoa.c ft_itoa_base.c\
	  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
	  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	  ft_strjoin.c ft_strjoin_mod.c ft_strtrim.c ft_strsplit.c ft_putendl.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c get_next_line.c

OBJS = ft_bzero.o ft_isalpha.o ft_isalnum.o ft_isascii.o \
	  ft_isdigit.o ft_isprint.o ft_memcpy.o ft_memchr.o \
	  ft_memcmp.o ft_memccpy.o ft_memmove.o ft_memset.o \
	  ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o \
	  ft_strdup.o ft_strlcat.o ft_strlen.o ft_wstrlen.o ft_strncat.o \
	  ft_strncmp.o ft_strncpy.o ft_strrchr.o ft_atoi.o ft_atoi_l.o \
	  ft_strstr.o ft_tolower.o ft_toupper.o  ft_strupper.o ft_strnstr.o\
	  ft_putchar.o ft_putstr.o ft_putnbr.o ft_itoa.o ft_itoa_base.o\
	  ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o \
	  ft_strclr.o  ft_striter.o ft_striteri.o ft_strmap.o \
	  ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o \
	  ft_strjoin.o ft_strjoin_mod.o ft_strtrim.o ft_strsplit.o ft_putendl.o \
	  ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
	  ft_putnbr_fd.o get_next_line.o

	  

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all
