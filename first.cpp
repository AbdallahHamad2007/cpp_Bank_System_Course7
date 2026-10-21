#include<iostream>
using namespace std;
void fast_io() { ios_base::sync_with_stdio(false);cin.tie(0); }
void solve()
{
	short a, b, c;cin >> a >> b >> c;
	if (b > a && c > b)cout << "STAIR" << endl;
	else if(b>a && b>c)cout << "PEAK" << endl;
	else cout<< "NONE" << endl;
}
int main() {
	fast_io();
	short n;cin >> n;
	while (n--)solve();
	return 0;		
}
/*
10**8 --> 1s

/*
* short n, m,counter=0;cin >> n>>m;
	string x, s;cin >> x >> s;
	bool found = 1;
	while ((x.find(s))==std::string::npos)
	{
		if (x.length() > 25 * s.length())
		{
			found = 0;
			break;
		}
		x += x;
		counter++;
	}
	if (found)cout << counter << endl;
	else cout << -1 << endl;
* short t;cin >> t;
	for (short i = 0;i < t;i++)
	{
		int l;cin >> l;
		unsigned long long Max = 0;
		string s;cin >> s;
		for (int i = 1;i < l;i++)
		{
			string s1, s2;
			s1 = s.substr(0, i);
			s2 = s.substr(i, l-1);
			set<char> set1(s1.begin(),s1.end());
			set<char> set2(s2.begin(), s2.end());
			Max = max(Max, (set1.size() + set2.size()));
		}
		cout << Max<<endl;
	}
* short arr[102]={0},MaxValue, n;cin >> n;
	for (short i = 1;i <= n;i++)
	{
		short a;cin >> a;
		arr[a]++;
		MaxValue = max(MaxValue, arr[a]);
	}
	cout << MaxValue;
* long long arr1[200000], arr2[200000];	
* int n, m;cin >> n >> m;
	for (int i = 0;i < n;i++)cin >> arr1[i];
	for (int i = 0;i < m;i++)cin >> arr2[i];
	if (n == 1)
	{
		for (int i = 0;i < m;i++)
		{
		if (arr1[0] <= arr2[i])cout << 1 << ' ';
		else cout << 0 << ' ';
		}
	}
	else
	{
		sort(arr1, arr1 + n);
		for (int i = 0;i < m;i++)
		{
			auto it = upper_bound(arr1, arr1 + n, arr2[i]);
			if (it != (arr1 + n-1))cout << (it - arr1) << ' ';
			else cout << n - 1 << ' ';
		}
	}
* short arr[100];
	short n;cin >> n;
	for (short i = 0;i < n;i++)cin >> arr[i];
	sort(arr, arr + n);
	for (short i = 0;i < n;i++)cout << arr[i]<<' ';
	return 0;
* short t;cin >> t;
	for (short i = 0;i < t;i++)
	{
		short t2;cin >> t2;
		short arr[100];
		for (short i = 0;i < t2;i++)cin >> arr[i];
		if ((arr[1] == arr[2]) && (arr[0] != arr[1]))cout << 1 << endl;
		else
		{
			set <short> container;
			for (short i = 0;i < t2;i++)
			{
				container.insert(arr[i]);
				if (container.size() == 2)
				{
					cout << i + 1<<endl;
					break;
				}
			}
		}
	}
* short t;cin >> t;
	for (short i = 0;i < t;i++)
	{
		short arr[3];cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		cout << arr[1] << endl;
	}
short t;cin >> t;
	for (short i = 0;i < t;i++)
	{
		short a, b, c;cin >> a >> b >> c;
		if (a == b)cout << c<<endl;
		else if (a == c)cout << b << endl;
		else cout << a << endl;
	}
int arr[100000],n,m ,move=1,loob=0;
	cin >> n >> m;
	for (int i = 0;i < m;i++)
	{
		int x;cin >> x;
		loob++;
		if (loob == n + 1)loob = 1;
		if(x == loob)move++;
		else
		{
			while (x != loob)
			{
				move++;
				loob++;
				if (loob == n + 1)loob = 1;
			}
		}
	}
	cout << move;
short a, b, x, dif = 0, same = 0;
	cin >> a >> b;
	while ((a > 0) && (b > 0))
	{
		dif++;
		a--;b--;
	}
	if (a > b)x = a;
	else x = b;
	while (x >= 2) {
		same++;
		x -= 2;
	}
	cout << dif << ' ' << same;
*/


