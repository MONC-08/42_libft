CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_strlcpy.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c


OBJS = $(SRCS:.c=.o)
NAME = libft.a
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all