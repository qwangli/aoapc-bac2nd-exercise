#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	int kase = 0;
	while (scanf("%d %d %d", &a, &b, &c) ) {
        int decimal=0;
		for (int i = 10; i < 100; i++) {//decimal part
			if(i%3==a&&i%5==b&&i%7==c){
            decimal=i;break;
            }
		}
        if(decimal==0)
        {
            printf("Case %d:No answer\n",++kase);
        }
		else{ //last decimal to rounding
	      printf("Case %d: %d", ++kase, decimal); //integral part
        }
        decimal=0;
	}
	return 0;
}
