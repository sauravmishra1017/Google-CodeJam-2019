#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
#define mp make_pair


int main() {
	int t, f;
	cin >> t >> f;
	for(int tt = 1; tt <= t; ++tt) {
		string res = "";
		vector<vector<int> > c(5, vector<int>());
		for(int i = 0; i < 119; ++i) {
			printf("%d\n", i * 5 + 1);
			fflush(stdout);
			char x;
			cin >> x;
			c[x - 'A'].push_back(i);
		}
		for(int u = 0; u < 5; ++u) 
		if (c[u].size() == 23) 
		res.push_back('A' + u);
		
		vector<vector<int> > d(5, vector<int>());
		for(int i = 0; i < 23; ++i) {
			int idx = c[res[0] - 'A'][i];
			printf("%d\n", idx * 5 + 2);
			fflush(stdout);
			char x;
			cin >> x;
			d[x - 'A'].push_back(idx);
		}
		for(int u = 0; u < 5; ++u) 
		if (d[u].size() == 5) 
		res.push_back('A' + u);
		
		vector<vector<int> > e(5, vector<int>());
		for(int i = 0; i < 5; ++i) {
			int idx = d[res[1] - 'A'][i];
			printf("%d\n", idx * 5 + 3);
			fflush(stdout);
			char x;
			cin >> x;
			e[x - 'A'].push_back(idx);
		}
		for(int u = 0; u < 5; ++u) 
		if (e[u].size() == 1) 
		res.push_back('A' + u);
		
		int idx = e[res[2] - 'A'][0];
		printf("%d\n", idx * 5 + 4);
		fflush(stdout);
		char x;
		cin >> x;
		//cout << "read " << x << endl;
		for(char ch = 'A'; ch <= 'E'; ch++) 
		if (ch != x && ch != res[0] && ch != res[1] && ch != res[2])
			res.push_back(ch);
		res.push_back(x);
		
		
		cout << res << endl;
		fflush(stdout);
		char ok;
		cin >> ok;
		if (ok != 'Y') break;
	}
}