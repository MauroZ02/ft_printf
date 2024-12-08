NAME = ft_printf.a
PRINTF = ar rcs
RM = rm -f

CC = cc
CCFLAGS = -Wall -Wextra -Werror

SRC =	ft_printf.c ft_printf_utils.c\

OBJ = $(SRC:.c=.o)
INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(PRINTF) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
