#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

static int	ft_tabsize(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			size++;
		i++;
	}
	return (size);
}

static int	ft_checkfree(char **tab, char *str, int i)
{
	int	j;

	j = 0;
	if (str == NULL)
	{
		while (j < i)
		{
			free(tab[j]);
			j++;
		}
		free(tab);
		return (1);
	}
	return (0);
}

static char	*ft_setstr(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_iter(char const *s, char c, int k)
{
	int	i;

	i = 0;
	if (k == 1)
	{
		while (*s && *s == c)
		{
			s++;
			i++;
		}
	}
	else
	{
		while (*s && *s != c)
		{
			s++;
			i++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		tabsize;
	int		i;

	if (s == NULL)
		return (NULL);
	tabsize = ft_tabsize(s, c);
	tab = (char **)malloc((tabsize + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	s = s + ft_iter(s, c, 1);
	i = -1;
	while (*s && ++i < tabsize + 1)
	{
		if (*s != c)
		{
			tab[i] = ft_setstr(s, c);
			if (ft_checkfree(tab, tab[i], i) == 1)
				return (NULL);
		}
		s = s + ft_iter(s, c, 0);
		s = s + ft_iter(s, c, 1);
	}
	tab[i + 1] = NULL;
	return (tab);
}


void    solution()
{
    int A, B;
    string sa, sb;
    char **s1, **s2;
    char **h1, **h2;
    char **k1, **k2;
    char **k11, **k22;

    // Read A and discard the rest of the line
    cin >> A;
    cin.ignore();
    // Read sa
    getline(cin, sa);

    // Read B and discard the rest of the line
    cin >> B;
    cin.ignore();
    // Read sb
    getline(cin, sb);

    // Output sa and sb
    s1 = ft_split(sa.c_str(), ' ');
    s2 = ft_split(sb.c_str(), ' ');
    int i = 0, flag = 0, ma1, ma2, sa1, sa2, mb1, mb2, sb1, sb2;
    while (s1[i])
    {
        int j = 0;
        h1 = ft_split(s1[i], '-');
        while (s2[j])
        {
            h2 = ft_split(s2[j], '-');
            k1 = ft_split(h1[0], ':');
            ma1 =  atoi(k1[0]);
            sa1 =  atoi(k1[1]);
            k11 = ft_split(h2[1], ':');
            ma2 =  atoi(k11[0]);
            sa2 =  atoi(k11[1]);

            // 

            k2 = ft_split(h2[0], ':');
            mb1 =  atoi(k2[0]);
            sb1 =  atoi(k2[1]);
            k22 = ft_split(h2[1], ':');
            mb2 =  atoi(k22[0]);
            sb2 =  atoi(k22[1]);

            if ((mb1 >= ma1 && mb1 <= ma2) && ((min(ma2 * 3600 + sa2 * 60, mb2 * 3600 + sb2 * 60) - max(ma1 * 3600 + ma2 * 60, mb1 * 3600 + mb2 * 60)) >= 30))
            {
                flag = 1;
                cout << "YES\n";
                return ;            
            }
            j++;
        }
        i++;
    }
    cout << "NO\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solution();
	return (0);
}