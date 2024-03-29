/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <idunaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:06:43 by idunaver          #+#    #+#             */
/*   Updated: 2019/09/20 19:37:29 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct			s_stack
{
	long long int		number;
	struct s_stack		*next;
	struct s_stack		*previous;
}						t_stack;

typedef struct			s_count_op
{
	int					op_a;
	int					op_b;
	int					sum_oper;
	long long			number;
	int					rev_rot_b;
	int					rev_rot_a;
	struct s_count_op	*next;
}						t_count_op;

int						check_number(char **number, int ac);
int						check_double_overloaded(char *number);
void					free_stacks(t_stack *stack_a, t_stack *stack_b);
void					del_first_elem_in_stack(t_stack **stack);
void					add_num_in_stack(long long number, t_stack *stack);
t_stack					*init_stack(long long number);
int						what_reverse_rotate(char **line, t_stack **stack_a,
t_stack **stack_b);
int						what_rotate(char **line, t_stack **stack_a,
t_stack **stack_b);
int						what_push(char **line, t_stack **stack_a,
t_stack **stack_b);
int						what_swap(char **line, t_stack **stack_a,
t_stack **stack_b);
void					swap(t_stack **stack, int print);
void					double_swap(t_stack **stack_a,
t_stack **stack_b, int print);
void					push_a(t_stack **stack_a, t_stack **stack_b,
int print);
void					push_b(t_stack **stack_a, t_stack **stack_b,
int print);
void					rotate(t_stack **stack, int print);
void					double_rotate(t_stack **stack_a,
t_stack **stack_b, int print);
void					reverse_rotate(t_stack **stack, int print);
void					double_reverse_rotate(t_stack **stack_a,
t_stack **stack_b, int print);
int						min_num_in_stack(t_stack *stack_a);
int						max_num_in_stack(t_stack *stack_a);
void					plan_drum(t_stack **stack_a,
t_stack **stack_b, int arg);
void					sort_numbers(t_stack **stack_a,
t_stack **stack_b, int arg);
void					back_to_the_push_swap(long long *n,
t_stack **stack_a, t_stack **stack_b, int count);
void					count_sort_not_three(t_stack **stack_a,
t_stack **stack_b, int arg);
void					moving_numbers(t_stack **stack_a,
t_stack **stack_b, int arg, int count_sort);
void					sort_stack_a(t_stack **stack_a, int arg);
void					final_rotate(t_stack **stack_a);
t_count_op				*total_operations(t_stack *stack_a,
t_stack *stack_b, int arg, int count_sort);
void					fill_list_opt(t_stack *stack_b,
t_stack *stack_a, int count_num, t_count_op **oper);
void					count_num_even(t_stack *stack_b,
t_stack *stack_a, int count_num, t_count_op **oper);
void					count_num_not_even(t_stack *stack_b,
t_stack *stack_a, int count_num, t_count_op **oper);
t_count_op				*init_list_op(int number, int op_a, int op_b);
void					add_elem_in_list_op(int number, int op_a,
int op_b, t_count_op **oper);
void					free_list_op(t_count_op **oper);
int						sorting_check(t_stack *stack_a);
int						how_much_sorting(t_stack *stack_a);
int						len_a(t_stack *stack_a);
int						count_a(int number, t_stack *stack_a, int max, int min);
int						counting_operations_in_a(t_stack *stack_a, int number);
void					sort_numbers(t_stack **stack_a,
t_stack **stack_b, int arg);
void					input(t_stack **stack_a, t_stack **stack_b, int visual);
int						len_double_arr(char **arr);
int						count_elems(char **av);
void					free_double_arr(char **double_arr);
char					**create_new_av(char **av);
t_stack					*fill_stack(t_stack **stack_a, char **av, int ac, int visual);
void					visual_stacks(t_stack **stack_a,
t_stack **stack_b, int visual);
int						search_length(t_stack *stack_a, t_stack *stack_b);
void					main_table(int width, int length,
t_stack *stack_a, t_stack *stack_b);
int						len_stack(t_stack *stack);
void					line(int max_len);
int						count_numbers_in_n(int number);
int						max_of_two(int a, int b);
int						search_width(t_stack *stack_a, t_stack *stack_b);
void					head_table(int width);
void					cell(int width, t_stack *stack_a, t_stack *stack_b);
void					back_to_the_a(t_stack **stack_a,
t_stack **stack_b, t_count_op *oper, int number);
void					head_table(int width);
void					checker(char **av, t_stack **stack_a,
t_stack **stack_b);
void					main_table_color(int width, int length,
t_stack *stack_a, t_stack *stack_b);
void					cell_color(int width, t_stack *stack_a,
t_stack *stack_b);
void					fill_stack_error(t_stack **stack_a, char **av);

#endif
