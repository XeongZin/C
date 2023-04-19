#include <stdio.h>
#include <stdlib.h>

int main() {
	int field[8][8];
	char field_c[8][8];
	int i, j;
	int count;
	int ave;
	int x=0;
	
	//평균 생산량 
	scanf("%d", &ave);
	
	//자동 분무기 수
	scanf("%d", &count);
	
	//분무기 갯수 만큼 배열 
	int* spray = malloc(sizeof(int) * count);
	
	//농장의 최종 생산량 및 출력용 배열 초기화 
	for(i=0;i<8;i++) {
		for(j=0;j<8;j++) {
			scanf("%d", &field[i][j]);
			field_c[i][j] = '.';
		}
	}
	
	for(j=0;j<8;i++) {
		if(field[0][j] != ave) {
			if(field[0][j] > ave) {
				spray[x] = i;
				x++;
			} else if(field[0][j] < ave) {
				spray[x] = i;
				x++;
			}
		}
	}
	
	for(i=0; i<count; i++) {
		printf("%d ", spray[i]);
	}
	
	/*
	//출력 
	for(i=0;i<8;i++) {
		for(j=0;j<8;j++) {
			printf("%c ", field_c[i][j]);
		}
		printf("\n");
	}*/
	
	
	
	return 0;
}
