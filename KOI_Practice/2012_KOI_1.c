#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int a[10], b[10];
	char re[10];
	int aw=0;
	int bw=0;
	int count=0;
	
	//A의 카드 순서대로 입력 
	for(i=0;i<10;i++) {
		scanf("%d", &a[i]);
	}
	
	//B의 카드 순서대로 입력 
	for(i=0;i<10;i++) {
		scanf("%d", &b[i]);
	}
	
	//A, B의 카드를 비교, A의 카드가 클시 A의 승점 2점,
	// B의 카드가 클시 B의 승점 2점, 둘의 카드가 동일할 시 둘다 승점 1점. 
	for(i=0;i<10;i++) {
		if(a[i] > b[i]) {
			aw=aw+3;
			re[i] = 'A';
		} else if(a[i] < b[i]) {
			bw+=3;
		 	re[i] = 'B';
		} else {
			aw+=1;
			bw+=1;
			re[i] ='D';
		}
	}
	
	//A, B의 승점 출력 후 비교를 통한 승자 출력
	printf("%d %d\n",aw, bw);

	if(aw>bw) printf("A");
	else if(aw<bw) printf("B");
	else if(aw==bw) {
		for(i=9;i>=0;i--) {
			if(re[i]!='D') {
				printf("%c",re[i]);
				break;
			} else {
				count += 1;
			}
		}
		if(count >= 10) {
			printf("D");
		}
	} 
	
	return(0);
}
