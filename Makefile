CC := cc
 CFLAGS := -Wall -Wextra -Werror
 DEBUG_FLAG	:= -g -fsanitize=address

 NAME := push_swap
 SRCS := ./src/libft/ft_split.c ./src/libft/ft_strlcpy.c ./src/libft/atol.c\
		./src/op/dimensional_comp.c ./src/op/divide.c ./src/op/input_list.c ./src/op/lst.c ./src/op/push.c ./src/op/reverse_rotate.c ./src/op/swap.c ./src/op/rotate.c\
 		./src/push_swap.c ./src/check.c ./src/str_to_long.c

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
