.PHONY: all clean fclean re f fclear c clear

NAME				=		cpp
CC					=		c++
CFLAGS				=		-Wall -Wextra -Werror -std=c++98
CFLAGSS				=		-Weverything						 -Wno-padded -Wno-documentation-unknown-command -Wno-documentation -std=c++98
NPD					=		--no-print-directory
MAKE				:=		$(MAKE) -j $(NPD)
RM					=		rm -fr
AR					=		ar -rcs
INC_FLAGS			=		-I $(D_INC)

#############################################################################################
#																							#
#										// Directories										#
#																							#
#############################################################################################


# Directories
D_SRC				=		src/
D_OBJ				=		1object/
D_INC				=		inc/


#############################################################################################
#																							#
#										// SOURCE											#
#																							#
#############################################################################################


SRC					=		tests.cpp


#----------------Source Header and Directories--------------------

D_ACCOUNT			=		Account/

H_ACCOUNT			=		Account.hpp
SRC_ACCOUNT			=		Account.cpp				\
							AccountFunc.cpp


# #----------------Source Header and Directories--------------------

# D_UTILS			=		Utils/

# H_UTILS			=		Utils.hpp
# SRC_UTILS		=		Utils.cpp			\
# 						UtilsFunc.cpp

#############################################################################################
#																							#
#										// OBJECT											#
#																							#
#############################################################################################


# All src in his Src Directories
SRCS				=		$(addprefix $(D_SRC), $(SRC))							\
							$(addprefix $(D_SRC)$(D_ACCOUNT), $(SRC_ACCOUNT))		\


# Changing all source directories to object directories
OBJS				=		$(subst $(D_SRC), $(D_OBJ), $(SRCS:.cpp=.o))
DEPS				=		$(SRCS:%.cpp=%.d)

INCS				=		$(addprefix $(D_SRC)$(D_ACCOUNT), $(H_ACCOUNT))

#############################################################################################
#																							#
#										// COMPILATION										#
#																							#
#############################################################################################


all					:
			$(MAKE) $(NAME)


$(NAME)				:	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


$(D_OBJ)%.o			:	$(D_SRC)%.cpp Makefile $(INCS)
			@mkdir -p $(dir $@)
			$(CC) $(CFLAGS) -c $< -o $@ -I $(D_SRC)


#############################################################################################
#																							#
#									// CLEAN  FCLEAN  RE									#
#																							#
#############################################################################################


clean 				:
			$(RM) $(D_OBJ)


fclean 				:
			$(RM) $(NAME)
			$(RM) $(D_OBJ)


re 					:	 fclean all


#############################################################################################
#																							#
#										Allias												#
#																							#
#############################################################################################


c				:	clear
clear			:	clean

f				:	fclean
fclear			:	fclean
