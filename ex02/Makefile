#Executable name
NAME = dreamJob

#Compiler and flags 
CC = g++
IFLAGS = -I include
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic ${IFLAGS}
#Source files

SRCS = src/Account.cpp src/tests.cpp

#Object file

OBJS = $(SRCS:src/%.cpp=obj/%.o)

all: $(NAME)


obj:
	mkdir -p obj 

$(NAME): obj $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

#Compile individual object files
obj/%.o: src/%.cpp
	$(CC) $(FLAGS) -c $< -o $@


# Clean object files
clean:
	rm -f $(OBJS)

# Clean everything
fclean: clean
	rm -f $(NAME)
	make 

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re