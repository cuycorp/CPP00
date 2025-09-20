#Executable name
NAME = awesomePhonebook

#Compiler and flags 
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

#Source files
SRCS = Contact.cpp PhoneBook.cpp main.cpp \
	   commandAdd.cpp commandSearch.cpp utils.cpp

#Object file
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

#Compile individual object files
%.o: %.cpp
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