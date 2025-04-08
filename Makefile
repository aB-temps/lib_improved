# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abetemps <abetemps@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 11:53:48 by abetemps          #+#    #+#              #
#    Updated: 2025/04/08 19:09:10 by abetemps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# GENERAL SETTINGS ====================================================================
NAME = lib_improved.a
.SILENT:

# DIRECTORIES==========================================================================
DIR_SRC		:= sources/
DIR_INC 	:= includes/
DIR_BUILD	:= .build/

# FLAGS & COMPILATOR SETTINGS =========================================================
CC 			:= cc
DEPS_FLAGS  := -MMD -MP
WARN_FLAGS	:= -Wall -Werror -Wextra
C_FLAGS		:= $(WARN_FLAGS) $(DEPS_FLAGS)
INC_FLAG	:= -I$(DIR_INC)

COMP 		:= $(CC) $(C_FLAGS) $(INC_FLAG)

ANTI_RELINK	:= Makefile $(DIR_INC) $(DIR_INC_LIB) 

# FUNCTIONS ===========================================================================
define generate_var_sources_dir
DIR_$(1) = $(addprefix $(DIR_SRC), $(shell echo $(1) | tr '[:upper:]' '[:lower:]')/)
endef

define generate_var_sources
SRC_$(1) = $(addprefix $(DIR_$(1)),$(F_$(1)))
endef

define generate_var_objects
OBJS_$(1) = $(patsubst $(DIR_SRC)%.c,$(DIR_BUILD)%.o,$(SRC_$(1)))
endef

define generate_var_deps
DEPS_$(1) = $(patsubst $(DIR_SRC)%.c,$(DIR_BUILD)%.d,$(SRC_$(1)))
endef

# COMPONENTS ==========================================================================
COMPONENTS :=	PRINT \
				READ \
				UTILS

# FILES ===============================================================================
F_PRINT :=  ft_printf.c \
			ft_printf_utils.c
F_READ := 	get_next_line.c
F_UTILS :=	ft_atoi.c \
			ft_freestr_tab.c \
			ft_isprint.c \
			ft_lstdelone.c \
			ft_lstsize.c \
			ft_memset.c \
			ft_strjoin.c \
			ft_strncmp.c \
			ft_substr.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_itoa.c \
			ft_lstiter.c \
			ft_memchr.c \
			ft_split.c \
			ft_strlcat.c \
			ft_strndup.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_isalpha.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_memcmp.c \
			ft_stradd.c \
			ft_strlcpy.c \
			ft_strnstr.c \
			ft_toupper.c \
			ft_count_words.c \
			ft_isascii.c \
			ft_lstadd_front.c \
			ft_lstmap.c \
			ft_memcpy.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_strrchr.c \
			ft_uintlen.c \
			ft_freestr.c \
			ft_isdigit.c \
			ft_lstclear.c \
			ft_lstnew.c \
			ft_memmove.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_atoi_base.c \
			ft_pow.c \
			ft_abs.c \
			ft_min.c \
			ft_max.c \
			ft_sign.c

# VARS GENERATION =====================================================================
$(foreach comp,$(COMPONENTS),$(eval $(call generate_var_sources_dir,$(comp))))
$(foreach comp,$(COMPONENTS),$(eval $(call generate_var_sources,$(comp))))
$(foreach comp,$(COMPONENTS),$(eval $(call generate_var_objects,$(comp))))
$(foreach comp,$(COMPONENTS),$(eval $(call generate_var_deps,$(comp))))

OBJS := $(foreach comp, $(COMPONENTS), $(OBJS_$(comp)))

DEPS := $(foreach comp, $(COMPONENTS), $(DEPS_$(comp)))

# COMPILATION =========================================================================
$(NAME) : $(OBJS)
	ar rcs $@ $<
	@echo ✨ $(NAME) compiled ✨

$(DIR_BUILD) :
	@mkdir -p $(DIR_BUILD)

$(DIR_BUILD)%.o : $(DIR_SRC)%.c $(ANTI_RELINK) | $(DIR_BUILD)
	@mkdir -p $(dir $@)
	$(COMP) -c $< -o $@

-include $(DEPS)

# RULES ===============================================================================
# build -------------------------------------------------------------------------------
all : $(NAME)

# clean -------------------------------------------------------------------------------
clean:
	@rm -rf $(DIR_BUILD)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.DEFAULT_GOAL = all

# debug -------------------------------------------------------------------------------
print-%:
	@echo $($(patsubst print-%,%,$@))

.PHONY: all clean fclean re print-%