#include <stdio.h>

int main(){
    int n1 , n2 , m;
	scanf("%d %d" , &n1 , &n2);
	m = n1;
	if(n2 > m)
		m = n2;
	if(n1 == n2)
		printf("%d\n" , n1);
	else
		printf("%d\n" , m);
    return 0;
}
