CC := gcc
 CFLAGS := -Wall -Wextra -Werror
 DEBUG_FLAG	:= -g -fsanitize=address

 NAME := test
 SRCS := ./libft/ft_split.c ./libft/ft_strlcpy.c ./libft/ft_atol.c\
		./src/check.c ./src/push_swap.c ./src/to_larray.c ./src/print_error.c
		

 # OBJS := test1.o test2.o test3.o
 OBJS := $(SRCS:.c=.o)
 # SRCS := *.c
 # OBJS := *.o
 
 all: $(NAME)
 
 # test: test1.o test2.o test3.o
 $(NAME): $(OBJS)
 # gcc -Wall -Wextra -Werror -o test test1.o test2.o test3.o
 # gcc -Wall -Wextra -Werror -o $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
 
 # Not recommended
 # test: test1.c test2.c test3.c
 # 	gcc -Wall -Wextra -Werror test1.c test2.c test3.c
 
 # $^ : (all) /:q!:wq
 # $< : (only the first one)
 
 # %.o: %.c
 # 	gcc -Wall -Wextra -Werror -c $(SRCS)
 
 
 # $(OBJS): $(SRCS)
	# gcc -Wall -Wextra -Werror -c $(SRCS)
 # ↑　does NOT work when srcs files are related
 
 # .o.c:
 # 	gcc -Wall -Wextra -Werror -c $(SRCS)
 # ↑　old rule and not clear what it means
 
 clean:
	rm -f $(OBJS)
 
 # -f option remove without confirmation (regardless of the file premission)
 
 fclean: clean
	rm -f $(NAME)
 
 re: fclean all

 debug:	CFLAGS += $(DEBUG_FLAG)
 debug:	re

 
 .PHONY:	all clean fclean re