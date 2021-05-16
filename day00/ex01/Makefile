NAME= PhoneBook
HDR_PATH= ./

HDR_NAME=phoneBook.class.h

FLAGS= -Wall -Wextra -Werror

HDR= $(addprefix $(HDR_PATH)/,$(HDR_NAME))

H_FLAG= -I $(HDR_PATH)

COMP= g++

# COMP= clang++

all: $(NAME) 

$(NAME) : *.cpp
	@$(COMP) *.cpp -o $@
	@echo " Made by : \033[1;91mAhaddad\033[m"

fclean:
	@rm -rf $(NAME)
	@echo "all objects are deleted." 

re : fclean all
