/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idunaver <idunaver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:02:59 by idunaver          #+#    #+#             */
/*   Updated: 2019/08/28 17:35:45 by idunaver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_numbers(t_stack **stack_a, t_stack **stack_b, int arg)
{
	if (sorting_check(*stack_a) == 1)
		return ;
	if (arg == 1)
		return ;
	if (arg <= 3)
		sort_stack_a(stack_a, arg);
	else
		plan_drum(stack_a, stack_b, arg);
	return ;
}

int			main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b;
	int		arg;

	arg = ac - 1;
	stack_b = NULL;
	stack_a = NULL;
	if (ac == 1)
		return (0);
	else
	{
		if (check_number(++av, ac) == 1)
		{
			ac--;
			stack_a = init_stack(ft_atoll(*av));
			while (--ac != -1 && *(++av))
				add_num_in_stack(ft_atoll(*av), stack_a);
			sort_numbers(&stack_a, &stack_b, arg);
			free_stacks(stack_a, stack_b);
		}
		else
			ft_putendl("Error");
	}
	return (0);
}
