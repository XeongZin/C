#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int a[10], b[10];
	char re[10];
	int aw=0;
	int bw=0;
	int count=0;
	
	//A�� ī�� ������� �Է� 
	for(i=0;i<10;i++) {
		scanf("%d", &a[i]);
	}
	
	//B�� ī�� ������� �Է� 
	for(i=0;i<10;i++) {
		scanf("%d", &b[i]);
	}
	
	//A, B�� ī�带 ��, A�� ī�尡 Ŭ�� A�� ���� 2��,
	// B�� ī�尡 Ŭ�� B�� ���� 2��, ���� ī�尡 ������ �� �Ѵ� ���� 1��. 
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
	
	//A, B�� ���� ��� �� �񱳸� ���� ���� ���
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
