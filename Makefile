NAME = libft.a
SRCS = ft_isalpha.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_strchr.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \

OBJS  = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -r $(NAME) $?

%.o : %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
