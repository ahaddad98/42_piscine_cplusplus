NAME= replace

FLAGS= -Wall -Wextra -Werror

COMP= clang++

all: $(NAME) 

$(NAME) : main.cpp
	@$(COMP) $(FLAGS) main.cpp -o $@
	@echo " Made by : \033[1;91mAhaddad\033[m"

fclean:
	@rm -rf $(NAME)
	@echo "all objects are deleted." 

re : fclean all
