#include <cstdio>
#include <cstring>

int a, b, i;
char op[3];
bool t;
int main() {
	while (scanf_s("%d %s %d", &a, op, 3, &b) && (op[0] != 'E')) {
		i++;
		if (!strcmp(op,">")) t = a > b? 1 : 0;
		else if (!strcmp(op,">=")) t = a >= b? 1 : 0;
		else if (!strcmp(op,"<")) t = a < b? 1 : 0;
		else if (!strcmp(op,"<=")) t = a <= b? 1 : 0;
		else if (!strcmp(op,"==")) t = a == b? 1 : 0;
		else if (!strcmp(op,"!=")) t = a != b? 1 : 0;
		if (t) printf("Case %d: true\n", i);
		else printf("Case %d: false\n", i);
	}
	return 0;
}