#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

int n,m,k,dir;
char s[205];
int main(int argc, char** argv) {
	scanf("%d%d%d",&n,&m,&k);
	scanf("%s",s);
	scanf("%s",s);
	dir = (s[0] == 'h') ? -1 : 1;
	scanf("%s",s);
	int len = strlen(s);
	for(int i = 0;i < len; ++i){
		if(m > k) m = n;
		else	  m = 1;
		if(k + dir == 0 || k + dir == n + 1) dir = -dir;
		k += dir;
		if(s[i] == '0' && k == m){
			printf("Controller %d\n",i + 1);return 0;
		}
		if(s[i] == '1'){
			m = (dir == -1) ? n : 1;
		}
	}
	printf("Stowaway\n");
	return 0;
}

