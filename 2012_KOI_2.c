#include <stdio.h>
#include <stdlib.h>

int main() {
	int count, i, j, total, ave;
	int sum = 0;
	int max = 0;
	
	//������ �� �޾ƿ���
	scanf("%d", &count);
	j = count;
	
	//������ ����ŭ �迭 �Ҵ� �� �� ���ú� �ݾ� �޾ƿ��� �� �� ���ϱ� 
	int* citys = malloc(sizeof(int) * count);
	for(i = 0; i < count; i++) {
		scanf("%d", &citys[i]);
		sum += citys[i];
	}
	
	//�� ���� �޾ƿ��� 
	scanf("%d", &total);
	
	if(sum > total) {
		//��û�� ������� ��� ���ϱ� 
		ave = sum/count;
		
		//��û�� ������� ��� ���� ��. ��պ��� ������ �� ���꿡�� ����, �ο��� ���� 
		for(i = 0; i < count; i++) {
			if(citys[i] < ave) {
				total -= citys[i];
				j -= 1;
			} else if(citys[i] > ave) {
				citys[i] = 0;
			}
		}
		
		ave = total / j;
		for(i = 0; i< count; i++) {
			if(citys[i] == 0) {
				citys[i] = ave; 
			}
		}
	}
	
	for(i = 0; i < count; i++) {
		if(max < citys[i]) max = citys[i];
	}
		
	printf("%d", max);

	return 0;
}
