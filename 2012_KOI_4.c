#include <stdio.h>
#include <stdlib.h>

int main() {
	int field[8][8];
	char field_c[8][8];
	int i, j;
	int count;
	int ave;
	int x=0;
	
	//��� ���귮 
	scanf("%d", &ave);
	
	//�ڵ� �й��� ��
	scanf("%d", &count);
	
	//�й��� ���� ��ŭ �迭 
	int* spray = malloc(sizeof(int) * count);
	
	//������ ���� ���귮 �� ��¿� �迭 �ʱ�ȭ 
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
	//��� 
	for(i=0;i<8;i++) {
		for(j=0;j<8;j++) {
			printf("%c ", field_c[i][j]);
		}
		printf("\n");
	}*/
	
	
	
	return 0;
}
