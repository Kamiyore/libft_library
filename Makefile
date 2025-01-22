# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knemcova <knemcova@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 11:09:08 by knemcova          #+#    #+#              #
#    Updated: 2025/01/21 08:20:14 by knemcova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#　complie with option
CC  =  cc 
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
PRINTF_numbers.c PRINTF_characters.c PRINTF.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 ar rcs $(NAME) $(OBJS) 
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

	
# r add or remake files in the archive,c creates archive, s creates index of the archive
# Remove object files
clean: 
	rm -f $(OBJS)

#fclean = clean all files + also the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything (remove and then recreate).
re: fclean all

#ensures that make treats clean, fclean and re as a special rules even if files exist in the directory
.PHONY: clean fclean re
