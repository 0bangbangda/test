#include<stdio.h>
#include<stdlib.h>
void Exchange(const float m[3][3], float n[3][3], const float p[], int sz, int col);
float Calc(float tab[3][3], int sz);
int main(void){
	float i[3][3] = { { -1.0, 1.0, -1.0 }, { 15.0, 0, -1.0 }, { 0, 1.5, 1.0 } };
	float us[] = { 0, 6, 4.5 };
	float i1[3][3], i2[3][3], i3[3][3];
	Exchange(i, i1, us, 3, 0);
	Exchange(i, i2, us, 3, 1);
	Exchange(i, i3, us, 3, 2);
	float ret = Calc(i, 3);
	printf("i1 = %f\n", Calc(i1, 3) / ret);
	printf("i2 = %f\n", Calc(i2, 3) / ret);
	printf("i3 = %f\n", Calc(i3, 3) / ret);
	return EXIT_SUCCESS;
}
void Exchange(const float m[3][3], float n[3][3], const float p[], int sz, int col)
{
	float tmp[3][3];
	int i, j;
	for (i = 0; i<sz; i++){
		for (j = 0; j<sz; j++)
			tmp[i][j] = m[i][j];
	}
	for (i = 0; i<sz; i++)
		tmp[i][col] = p[i];
	for (i = 0; i<sz; i++){
		for (j = 0; j<sz; j++)
			n[i][j] = tmp[i][j];
	}
}
float Calc(float tab[3][3], int sz)
{
	int i, j; float sum = 1.0;
	for (j = 0; j < sz; j++){
		if (tab[j][j] == 0){
			for (int k = j + 1; k < sz; k++){
				if (tab[k][j] != 0){
					float tmp = tab[k][j];
					tab[k][j] = tab[j][j];
					tab[j][j] = tmp;
					break;
				}
				if (k == sz)
					return 0;
			}
		}for (int k = j; k < sz; k++){
			
		}
	}
	for (i = 0; i < sz; i++)
		sum *= tab[i][i];
	return sum;
	}