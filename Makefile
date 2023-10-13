NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = crus

INCLUDES = ./includes

RM = rm -f

SRCS_DIR = ./srcs
SRCS_FILES = {*.c}
SRCS = $(addprefix $(SRCS_DIR),$(SRCS_FILES))

OBJS_DIR = ./srcs
OBJS_FILES = $(SRCS_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.c = .o))

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRCS)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY = all clean fclean re