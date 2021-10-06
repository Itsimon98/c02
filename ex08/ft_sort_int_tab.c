/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:43:21 by sfarina           #+#    #+#             */
/*   Updated: 2021/10/06 18:30:21 by sfarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b; 
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int swp;
	int	con;
	con = 0;
	while (con < size - 1)
	{
	if (tab[con] > tab[con + 1])
	{
		swp = *tab;
		*tab = *tab + 1;
		*tab + 1 = swp;
	}
	con++;
	}

}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9};
	int h;
printf("\nex08/\nft_sort_int_tab :\n\n");
	printf("Before = ");
	h = 0;
	while (h < 9)
		printf("%d", a[h++]);

	printf("\nAfter = ");
	h = 0;
	ft_sort_int_tab(a, 9);
	while (h < 9)
		printf("%d", a[h++]);

	return 0;

}
