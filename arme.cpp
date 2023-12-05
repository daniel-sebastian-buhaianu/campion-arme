#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
	ifstream f("arme.in");
	int n, m;
	f >> n >> m;
	int v[n+m], i;
	for (i = 0; i < n; i++) f >> v[i];
	for (i = 0; i < m; i++) f >> v[n+i];
	f.close();
	sort(v, v+n+m);
	int s = 0;
	for (i = n+m-1; i >= m; i--) s += v[i];
	ofstream g("arme.out");
	g << s;
	g.close();
	return 0;
}

