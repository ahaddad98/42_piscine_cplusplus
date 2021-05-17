NAME= PhoneBook
HDR_PATH= ./
SRC_PATH= ./
OBJ_PATH= ./
SRC_NAME=Phonebook.class.cpp\
		PhoneBook.cpp\

HDR_NAME=phoneBook.class.h

OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
SRC= $(addprefix $(SRC_PATH)/,$(SRC_NAME))
HDR= $(addprefix $(HDR_PATH)/,$(HDR_NAME))

FLAGS= -Wall -Wextra -Werror

H_FLAG= -I $(HDR_PATH)

COMP= clang++

all: $(NAME) 

$(NAME) : $(SRC_NAME)
	@$(COMP) $(SRC_NAME) -o $@
	@echo " Made by : \033[1;91mAhaddad\033[m"

fclean:
	@rm -rf $(NAME)
	@echo "all objects are deleted." 

re : fclean all
