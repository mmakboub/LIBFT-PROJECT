# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 16:58:29 by mmakboub          #+#    #+#              #
#    Updated: 2021/12/03 00:08:04 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FONCTIONS = ft_atoi.c\
		ft_isalpha.c\
		ft_itoa.c\
		ft_memmove.c\
		ft_putnbr_fd.c\
		ft_strdup.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_tolower.c\
		ft_bzero.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_memset.c\
		ft_putstr_fd.c\
		ft_striteri.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_isdigit.c\
		ft_memcmp.c\
		ft_putchar_fd.c\
		ft_strjoin.c\
		ft_strmapi.c\
		ft_strtrim.c\
		ft_isalnum.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_putendl_fd.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_substr.c\
		ft_split.c
BONUS_FUNCTION = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c

GC = gcc
CFLAG = -Wall -Werror -Wextra
RM = rm -f
AR = ar
ARFLAG = crs
INCLUDE = libft.h

OBJS = $(FONCTIONS:.c=.o)
B_OBJS = $(BONUS_FUNCTION:.c=.o)


all : $(NAME)

%.o : %.c 

	$(GC) $(CFLAG) -c $< -o $@

$(NAME):$(OBJS) $(INCLUDE)
	$(AR) $(ARFLAG) $(NAME) $(OBJS)

bonus: $(OBJS) $(B_OBJS) $(INCLUDE)
	$(AR) $(ARFLAG) $(NAME) $(OBJS) $(B_OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all
