/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:45:23 by kseligma          #+#    #+#             */
/*   Updated: 2023/10/29 17:45:30 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_rows(int ind, char board[17], char *inp);
int	check_cols(int ind, char board[17], char *inp);

int	input_check(int ind, char board[17], char *inp)
{
	if ((ind + 1) % 4 == 0)
		if (check_rows(ind, board, inp) == 0)
			return (0);
	if (ind > 11)
		if (check_cols(ind, board, inp) == 0)
			return (0);
	return (1);
}

int	check_rows(int ind, char board[17], char *inp)
{
	int	view;

	view = 1;
	if (board[ind - 1] > board[ind])
		view ++;
	if (board[ind - 2] > board[ind - 1] && board[ind - 2] > board[ind])
		view ++;
	if (board[ind - 3] == 4 + 48)
		view ++;
	if (view != inp[12 + (ind / 4)] - 48)
		return (0);
	view = 1;
	if (board[ind - 2] > board[ind - 3])
		view ++;
	if (board[ind - 1] > board[ind - 2] && board[ind - 1] > board[ind - 3])
		view ++;
	if (board [ind] == 4 + 48)
		view ++;
	if (view != inp[8 + (ind / 4)] - 48)
		return (0);
	return (1);
}

int	check_cols(int ind, char board[17], char *inp)
{
	int	view;

	view = 1;
	if (board[ind - 4] > board[ind])
		view ++;
	if (board[ind - 8] > board[ind - 4] && board[ind - 8] > board[ind])
		view ++;
	if (board[ind - 12] == 4 + 48)
		view ++;
	if (view != inp[ind - 8] - 48)
		return (0);
	view = 1;
	if (board[ind - 8] > board[ind - 12])
		view ++;
	if (board[ind - 4] > board[ind - 8] && board[ind - 4] > board[ind - 12])
		view ++;
	if (board[ind] == 4 + 48)
		view ++;
	if (view != inp[ind - 12] - 48)
		return (0);
	return (1);
}
