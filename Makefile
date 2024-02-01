NAME = push_swap

BOLD = \033[1m
RESET = \033[0m
BLUE = \033[34m
RED = \033[31m

LIBFT_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
      ft_memset.c ft_strlcpy.c ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c \
      ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_memcpy.c \
      ft_atoi.c ft_memcmp.c ft_bzero.c ft_calloc.c ft_strdup.c ft_substr.c \
      ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c \
      ft_itoa.c ft_split.c ft_lstnew.c ft_lstsize.c ft_lstlast.c \
      ft_lstadd_back.c ft_lstadd_front.c ft_lstiter.c ft_lstdelone.c \
      ft_lstclear.c ft_lstmap.c ft_printc.c ft_printf.c \
	ft_putnbr.c ft_putstr.c ft_hexdec.c ft_putchar.c \
      ft_printp.c ft_unsigned.c 


SWAP_SRC = ft_checkarg.c ft_createstruct.c ft_free.c ft_utils.c \
      ft_checknum.c ft_pushswap.c ft_comands.c my_sort.c \
      ft_do1.c ft_do.c ft_quicksort.c ft_quicksort2.c \
      ft_quickutils.c ft_quickutils2.c ft_swap.c

SRC = $(addprefix ./src/ext/, $(LIBFT_SRC)) \
      $(addprefix ./src/swap/, $(SWAP_SRC))


SRCOBJ = obj/
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(addprefix $(SRCOBJ), $(SRC:./src/%.c=%.o))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BOLD)$(BLUE)$(NAME) has been compiled successfully!$(RESET)"
	@${CC} ${CFLAGS} -g push_swap.c ${OBJ} -o $(NAME)

$(SRCOBJ)%.o: src/%.c
	@mkdir -p $(dir $@)
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "$(BOLD)$(RED)Cleaning up objects files!$(RESET)"
	@rm -rf $(SRCOBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
