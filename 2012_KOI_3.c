#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int height, width = 2;
	int b_max, s_loca; 
	
	//����Ʈ�� �� �ޱ� 
	scanf("%d", &height);
	
	//����Ʈ�� ��ġ�� �л� ���� ���� 2���� �迭 ���� �Ҵ� 
	int* citys = malloc(sizeof(int) * height);
	for(i = 0; i < height; i++) {
		citys[i] =  malloc(sizeof(int) * width);
	}
	
	//���й��� ���� �Է� 
	scanf("%d", &b_max);
	
	//�б��� ��ġ �Է� 
	scanf("%d", &s_loca);
	
	//�� ����Ʈ�� ��ġ�� �� ����Ʈ�� ž���ο� 
	for(i=0; i<height; i++) {
		for(j=0; j<width; j++) {
			scanf("%d", &citys[i][j]);
		}
	}
	
	
	for(i=0; i < height; i++) {
		for(j=0; j < width; j++) {
			printf("%d ", citys[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
