all:
	gcc -g -I./libft -L./libft -lft -o gnl main.c get_next_line.c