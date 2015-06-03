
SRC	=	main.m		\
		NumberBottles.m	\
		Song.m

CC	=	clang

NAME	=	objC

GNUSTEPFLAG	=	`gnustep-config --objc-flags`
CFLAG		=	-lobjc -lgnustep-base

all: $(NAME)

$(NAME):
	$(CC) $(GNUSTEPFLAG) -o $(NAME) $(SRC) $(CFLAG)

fclean:
	rm -rf  $(NAME)

re: fclean all
