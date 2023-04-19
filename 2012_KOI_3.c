#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int height, width = 2;
	int b_max, s_loca; 
	
	//아파트의 수 받기 
	scanf("%d", &height);
	
	//아파트의 위치와 학생 수를 위한 2차원 배열 동적 할당 
	int* citys = malloc(sizeof(int) * height);
	for(i = 0; i < height; i++) {
		citys[i] =  malloc(sizeof(int) * width);
	}
	
	//통학버스 정원 입력 
	scanf("%d", &b_max);
	
	//학교의 위치 입력 
	scanf("%d", &s_loca);
	
	//각 아파트의 위치와 그 아파트의 탑승인원 
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
