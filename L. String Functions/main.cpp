#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int r, l, m, num1, num2; //end of substring, start of substring, lenght of subquery.
string sub_s;

//function to get the boundaries of substring:
int l_r(string query)
{
	m = query.size();

	int i = 0;
	while ((int)query[i] != 32)
	{
		i++;
	}
	i++;

	num1 = 0;
	while ((int)query[i] != 32)
	{
		num1 = num1 * 10 + (int)query[i] - 48;
		i++;
	}
	i++;


	num2 = 0;
	while ((int)query[i] >= 48 && (int)query[i] <= 57)
	{
		num2 = num2 * 10 + (int)query[i] - 48;
		i++;
	}

	r = max(num1, num2); //maximum boundary
	l = min(num1, num2); //minimum boindary

	return l;
	return r;
}


//function to get the sub string based on it's index's boundaries above:
string sub(string s, int r, int l)
{
	sub_s = s.substr(l - 1, r - l + 1);
	return sub_s;
}


int main()
{
	int n, q;  cin >> n >> q; //string length, number of queries
	string s;  cin >> s;
	cin.ignore();

	while (q--)
	{
		n = s.size(); //redefining size of the stirng after each edit
		string query;
		getline(cin, query);

		int query_len = query.size(); //query length
		string sub_query = query.substr(0, 3); //to test in conditions...

		if (sub_query == "pop") //pop_back
		{
			s.pop_back();
		}
		else if (sub_query == "fro") //front
		{
			cout << s[0] << endl;
		}
		else if (sub_query == "bac") //back
		{
			cout << s[n - 1] << endl;
		}
		else if (sub_query == "sor") //sort
		{
			l_r(query);
			sub(s, r, l);
			sort(sub_s.begin(), sub_s.end());
			s.replace(l - 1, r - l + 1, sub_s);
		}
		else if (sub_query == "rev") //reverse
		{
			l_r(query);
			sub(s, r, l);
			reverse(sub_s.begin(), sub_s.end());
			s.replace(l - 1, r - l + 1, sub_s);
		}
		else if (sub_query == "pri") //print ' '
		{
			int position = query[query_len - 1] - 48;
			cout << s[position] << endl;
		}
		else if (sub_query == "sub") //substr .. ..
		{
			l_r(query);
			cout << sub(s, r, l) << endl;
		}
		else //push_back
		{
			s.push_back(query[query_len - 1]);
		}
	}
}
