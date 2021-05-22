NAME= megaphone

FLAGS= -Wall -Wextra -Werror

COMP= clang++

all: $(NAME) 

$(NAME) : megaphone.cpp
	@$(COMP) $(FLAGS) megaphone.cpp -o $@
	@echo " Made by : \033[1;91mAhaddad\033[m"

fclean:
	@rm -rf $(NAME)
	@echo "all objects are deleted." 

re : fclean all
