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
        area += min + 0.5 * (max-min); // 计算每一小段面积并累加
        x=y;
    }

    printf("%.2lf\n", area); // 输出总面积，精确到小数点后两位

    return 0;
}

