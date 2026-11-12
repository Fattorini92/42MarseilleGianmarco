#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : gfattori < gfattori @learner .42.tech> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2026 / 11 / 11 10 : 47 : 28 by gfattori # + # # + # #
#Updated : 2026 / 11 / 11 10 : 47 : 32 by gfattori## # ########.fr #
# #
#**************************************************************************** #

NAME = libft.a

CC = cc 
CFLAGS = -Wall - Wextra - Werror 
AR = ar rcs 
RM = rm -f

all : $(NAME)


clean : $(RM) $(OBJS) 

fclean : clean 
	$(RM) $(NAME) 

re : fclean all