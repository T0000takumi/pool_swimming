#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	g_arr[100];
int	g_isused[100] = {0, };
int	g_ok = 0;
bool	is_ok_with_view(int k, int i, int n, int view_n, int *g_arr);
bool	verify1(int *g_arr, int n, int *view_n);
bool	verify2(int *g_arr, int n, int *view_n);
bool	verify3(int *g_arr, int n, int *view_n);

void	make_line_by_n(int k, int n, int *view_n)
{
	int	i;
	int j;
	int	max_height;
	int	view_until_now;

	if (k == n * n)
	{
		if (verify1(g_arr, n, view_n) && verify2(g_arr, n, view_n) && verify3(g_arr, n, view_n) && g_ok == 0)
		{
			g_ok++;
			i = -1;
			while (i++ < n - 1)
			{
				j = -1;
				while (j++ < n - 1)
				{
					printf("%d", g_arr[n * j + i]);
					if (j != n - 1)
						printf(" ");
				}
				printf("\n");
			}
		}
		return ;
	}
	if (k % n == 0)
	{
		max_height = 0;
		view_until_now = 0;
	}
	i = 0;
	while (i++ < n)
	{
		if (g_isused[i] == (k/n) && is_ok_with_view(k, i, n, view_n[(k/n)], g_arr))
		{
			g_arr[k] = i;
			g_isused[i]++;

			make_line_by_n(k + 1, n, view_n);
			g_isused[i]--;
		}
	}
}

int	main(int argc, char *argv[])
{
	int n;
	int i;
	int str_len;
	char *input_pnt;
	int view_n[40];

	if (argc != 2)
		printf("Not argc2 Error\n");
	input_pnt = argv[1];

	str_len = 0;
	while (input_pnt[str_len] != '\0')
		str_len++;

	n = (str_len + 1) / 8;
	if ((str_len + 1) % 8 != 0)
	{
		printf("Length Error\n");
		return (0);
	}
	i = 0;
	while (i < 4 * n)
	{
		view_n[i] = input_pnt[2 * i] - '0';
		if (!(1 <= view_n[i] && view_n[i] <= n))
		{
			printf("Not valid digits Error\n");
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < (4 * n - 1))
	{
		if (input_pnt[2 * i + 1] != ' ')
		{
			printf("delimeter is Not space Error\n");
			return (0);
		}
		i++;
	}

	make_line_by_n(0, n, view_n);
	if (g_ok == 0)
		printf("Error\n");
}






void	no_reverse(int n, int *line_box, int *cnt)
{
	int	i;
	char max_height;

	i = 0;
	max_height = line_box[i];
	while (i++ != n - 1)
	{
		if (max_height < line_box[i])
		{
			max_height = line_box[i];
			(*cnt)++;
		}
	}
}

void	yes_reverse(int n, int *line_box, int *cnt)
{
	int	i;
	char max_height;

	i = n - 1;
	max_height = line_box[i];
	while (i-- != 0)
	{
		if (max_height < line_box[i])
		{
			max_height = line_box[i];
			(*cnt)++;
		}
	}
}

int	view_get_n(int n, int *line_box, bool reverse)
{
	int cnt;

	cnt = 1;
	if (reverse == false)
		no_reverse(n, line_box, &cnt);
	else
		yes_reverse(n, line_box, &cnt);
	return (cnt);
}
// i : 넣으려고 하는 숫자, n : 한줄에 몇개
// view_n : 최종적으로 몇개로 보여야하는지
bool	is_ok_with_view(int k, int i, int n, int view_n, int *g_arr)
{
	int	cur;
	int	max_height;
	int	view_until_now;
	int	exp_max;
	int	n_is_used[10] = {0, };
	int	j;

	cur = (k/n) * n;
	max_height = 0;
	view_until_now = 0;
	while(cur < k)
	{
		if (cur % n == 0)
		{
			max_height = g_arr[cur];
			view_until_now++;
		}
		else if (max_height < g_arr[cur])
		{
			max_height = g_arr[cur];
			view_until_now++;
		}
		n_is_used[g_arr[cur]] = 1;
		cur++;
	}
	n_is_used[i] = 1;
	if (max_height < i)
	{
		view_until_now++;
		max_height = i;
	}
	exp_max = view_until_now;
	j = 0;
	while (j++ < n)
		if (n_is_used[j] == 0 && max_height < j)
			exp_max++;
	if (exp_max < view_n)
		return (false);
	else if (view_until_now > view_n)
		return (false);
	else
		return (true);
}

bool	verify1(int *g_arr, int n, int *view_n)
{
	int	ver_k;
	int	ver_array[100];
	int	i;
	bool ver_return;

	ver_return = true;
	ver_k = 0;
	while(ver_k < n * n)
	{
		if (ver_k % n == n - 1)
		{
			i = 0;
			while (i < n) // 원하는 배열 만들기
			{
				ver_array[i] = g_arr[(ver_k / n) * n + i];
				i++;
			}
			if (view_get_n(n, ver_array, 1) == view_n[(ver_k / n) + n])
				ver_return *= true;
			else
				ver_return *= false;
		}
		ver_k++;
	}
	return (ver_return);
}

bool	verify2(int *g_arr, int n, int *view_n)
{
	int	ver_k;
	int	ver_array[100];
	int	i;
	int	j;
	bool ver_return;

	ver_return = true;
	ver_k = 0;
	while(ver_k < n)
	{
		i = 0;
		while (i < n) // 원하는 배열 만들기
		{
			ver_array[i] = g_arr[i * n + ver_k];
			i++;
		}
		i = -1;
		while (i++ < n - 1)
		{
			j = i + 1;
			while (j < n)
			{
				if (ver_array[i] == ver_array[j])
					return (false); //ver_array 중복체크*/
				j++;
			}
		}
		if (view_get_n(n, ver_array, 0) == view_n[ver_k + 2 * n])
			ver_return *= true;
		else
			ver_return *= false;
		ver_k++;
	}
	return (ver_return);
}

bool	verify3(int *g_arr, int n, int *view_n)
{
	int	ver_k;
	int	ver_array[100];
	int	i;
	int	j;
	bool ver_return;

	ver_return = true;
	ver_k = 0;
	while(ver_k < n)
	{
		i = 0;
		while (i < n) // 원하는 배열 만들기
		{
			ver_array[i] = g_arr[i * n + ver_k];
			i++;
		}
		i = -1;
		while (i++ < n - 1)
		{
			j = i + 1;
			while (j < n)
			{
				if (ver_array[i] == ver_array[j])
					return (false); //ver_array 중복체크*/
				j++;
			}
		}
		if (view_get_n(n, ver_array, 1) == view_n[ver_k + 3 * n])
			ver_return *= true;
		else
			ver_return *= false;
		ver_k++;
	}
	return (ver_return);
}
