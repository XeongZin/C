#include <stdio.h>
#include <stdlib.h>

int main() {
	int count, i, j, total, ave;
	int sum = 0;
	int max = 0;
	
	//도시의 수 받아오기
	scanf("%d", &count);
	j = count;
	
	//도시의 수만큼 배열 할당 후 각 도시별 금액 받아오며 총 합 구하기 
	int* citys = malloc(sizeof(int) * count);
	for(i = 0; i < count; i++) {
		scanf("%d", &citys[i]);
		sum += citys[i];
	}
	
	//총 예산 받아오기 
	scanf("%d", &total);
	
	if(sum > total) {
		//요청한 예산들의 평균 구하기 
		ave = sum/count;
		
		//요청한 에산들을 평균 값과 비교. 평균보다 낮으면 총 예산에서 제외, 인원도 제외 
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
