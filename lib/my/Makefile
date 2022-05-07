##
## EPITECH PROJECT, 2021
## makfile
## File description:
## compile
##

LIB	=	my_getnbr.c					\
		my_putchar.c				\
		my_free_array.c				\
		my_putstr.c					\
		my_strcmp.c					\
		my_strlen.c					\
		my_file_in_str.c			\
		my_str_to_word_array.c

OBJL		=		$(LIB:.c=.o)

CPPFLAGS	=		-Wall -Wextra -g3

CFLAGS		=		-Iincludes	$(LDFLAGS)

AR			=		@ar rc

RM			=		rm -f

NAME		=		libmy.a

all:	$(NAME)

.SILENT:

$(NAME):	$(OBJL)
	@$(AR) $(NAME) $(OBJL)
	@cp $(NAME) ../
	@cp my.h ../../includes/

clean:
	@$(RM) $(OBJL)

fclean:
	@$(RM) $(OBJL)
	@$(RM) $(NAME)
	@$(RM) ../$(NAME)

re:	fclean	all
