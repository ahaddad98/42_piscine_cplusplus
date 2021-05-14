NAME= megaphone

FLAGS= -Wall -Wextra -Werror

COMP= g++

all: $(NAME) 

$(NAME) : megaphone.cpp
	@$(COMP) megaphone.cpp -o $@
	@echo " Made by : \033[1;91mAhaddad\033[m"
# clean:
	# @rm megaphone.o
fclean:
	@rm -rf $(NAME)
	@echo "all objects are deleted." 

re : fclean all
