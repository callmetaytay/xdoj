#include <stdio.h>

int main() {
    double x, y, area = 0.0;

    scanf("%lf", &x);
    while (scanf("%lf", &y) == 1) {
        if (y < 0) {
            continue;
        }
        double min=x,max=y;
        if(x>y){
        	min=y;
        	max=x;
		}
        area += min + 0.5 * (max-min); // ����ÿһС��������ۼ�
        x=y;
    }

    printf("%.2lf\n", area); // ������������ȷ��С�������λ

    return 0;
}

