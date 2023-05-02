NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

SRC =	main.c \
		parsing.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		rotate_utils.c \
		sort_utils.c \
		sort.c \
		sort3.c \
		swap.c \
		list_lib/get_extremums.c \
		list_lib/lst_del.c \
		list_lib/lst_get.c \
		list_lib/lst_is_sorted.c \
		list_lib/lst_new.c \



			

OBJ = ${SRC:.c=.o}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: clean all

.PHONY: all clean fclean re bonus