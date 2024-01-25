NAME = push_swap

LIBFT_SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memset.c \
      ft_strlcpy.c \
      ft_memmove.c \
      ft_strlcat.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strncmp.c \
      ft_memchr.c \
      ft_strnstr.c \
      ft_memcpy.c \
      ft_atoi.c \
      ft_memcmp.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_itoa.c \
      ft_split.c \
      ft_lstnew.c \
      ft_lstsize.c \
      ft_lstlast.c \
      ft_lstadd_back.c \
      ft_lstadd_front.c \
      ft_lstiter.c \
      ft_lstdelone.c \
      ft_lstclear.c \
      ft_lstmap.c \
      ft_printc.c  \
	  ft_printf.c \
	  ft_putnbr.c \
      ft_putstr.c \
      ft_hexdec.c \
      ft_putchar.c \
      ft_printp.c \
      ft_unsigned.c \


PREFIX = ext/libft/
SRC = ./src/ft_checkarg.c \
	./src/ft_createstruct.c \
	./src/ft_msgerror.c \
	./src/ft_free.c \
      ./src/ft_utils.c \
      ./src/ft_checknum.c \
      ./src/ft_pushswap.c \
      ./src/ft_comands.c \
      ./src/ft_issorted.c \
      ./src/my_sort.c \
      ./src/ft_do1.c \
      ./src/ft_do.c \
      ./src/ft_quicksort.c

LIBFT = $(addprefix $(PREFIX),$(LIBFT_SRC))
CC = cc
CFLAGS = -Wall -Wextra -Werror
all: 
	$(CC) main.c -g  $(LIBFT) $(SRC)