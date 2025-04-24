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


SRC					=		main.cpp


#----------------Source Header and Directories--------------------

D_CONTACT			=		Contact/

H_CONTACT			=		Contact.hpp
SRC_CONTACT			=		Contact.cpp				\
							ContactFunc.cpp

#----------------Source Header and Directories--------------------

D_PHONEBOOK			=		PhoneBook/

H_PHONEBOOK			=		PhoneBook.hpp
SRC_PHONEBOOK		=		PhoneBook.cpp			\
							PhoneBookFunc.cpp

# #----------------Source Header and Directories--------------------

D_UTILS			=		Utils/

H_UTILS			=		Utils.hpp
SRC_UTILS		=		Utils.cpp			\
						UtilsFunc.cpp


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
							$(addprefix $(D_SRC)$(D_CONTACT), $(SRC_CONTACT))		\
							$(addprefix $(D_SRC)$(D_PHONEBOOK), $(SRC_PHONEBOOK))	\
							$(addprefix $(D_SRC)$(D_UTILS), $(SRC_UTILS))


# Changing all source directories to object directories
OBJS				=		$(subst $(D_SRC), $(D_OBJ), $(SRCS:.cpp=.o))
DEPS				=		$(SRCS:%.cpp=%.d)

INCS				=		$(addprefix $(D_SRC)$(D_CONTACT), $(H_CONCTACT))		\
							$(addprefix $(D_SRC)$(D_PHONEBOOK), $(H_PHONEBOOK))		\
							$(addprefix $(D_SRC)$(D_UTILS), $(H_UTILS))

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
