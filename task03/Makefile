NAME = golf

SRC = golf.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CFALGS = -std=c++11 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ)

%.o: %.cpp
	g++ -std=c++11 $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean
