#Executable name
NAME = cpp00


#Compiler and flags 
CC = g++
FLAGS = -Wall -Wextra -Werror

#Source files
SRCS = megaphone.cpp 

#Object file
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

#Compile individual object files
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)
	make -C  clean 

# Clean everything
fclean: clean
	rm -f $(NAME)
	make -C  fclean

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re