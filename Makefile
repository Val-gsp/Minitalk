SHELL		=	/bin/bash

NAME		= client
NAMESV		= server

LIBFT		= libft
INC		= inc
HEADER		= -I inc
SRC_DIR		= src/
OBJ_DIR		= obj/
CC		= gcc
FLAGS		= -Wall -Werror -Wextra
FSANITIZE	= -fsanitize=address -g3
RM		= rm -f

SRCCL_FILES	=	client
SRCSV_FILES	=	server

SRCCL 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRCCL_FILES)))
OBJCL 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRCCL_FILES)))

SRCSV 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRCSV_FILES)))
OBJSV 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRCSV_FILES)))

OBJF		=	.cache_exists

start:
			@make -C $(LIBFT)
			@cp $(LIBFT)/libft.a .
			@make all

all:		$(NAME) $(NAMESV)
			@echo -e "--> [\033[0;32mCompilation terminée pour tous les cibles principales\033[0m]"

$(NAME):	$(OBJCL) $(OBJF)
			@$(CC) $(FLAGS) $(OBJCL) $(HEADER) libft.a -o $(NAME)
			@echo -e "--> [\033[0;32mCompilation de $(NAME) terminée\033[0m]"

$(NAMESV):	$(OBJSV) $(OBJF)
			@$(CC) $(FLAGS) $(OBJSV) $(HEADER) libft.a -o $(NAMESV)
			@echo -e "--> [\033[0;32mCompilation de $(NAMESV) terminée\033[0m]"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(OBJF)
			@$(CC) $(FLAGS) $(HEADER) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)
			@echo -e "--> [\033[0;32mDossier obj cree dans libft -> fichier.o\033[0m]"
			@echo -e "--> [\033[0;32mDossier obj cree dans minitalk -> fichier.o\033[0m]"

clean:
			@$(RM) -r $(OBJ_DIR)
			@$(RM) $(OBJF)
			@make clean -C $(LIBFT)
			@echo -e "--> [\033[0;32mTous les fichiers .o supprimés\033[0m]"

fclean:		clean
			@$(RM) $(NAME) $(NAMESV) 
			@$(RM) $(LIBFT)/libft.a
			@$(RM) libft.a
			@find . -name ".DS_Store" -delete

re:			fclean all

norm:
			@clear
			@norminette $(SRC) $(INC) $(LIBFT) | grep -v Norme -B1 || true

.PHONY:		start all clean fclean re bonus norm