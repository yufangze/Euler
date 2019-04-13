/*************************************************************************
	> File Name: 5.cpp
	> Author: yufangze
	> Mail: 2224590123@qq.com
	> Created Time: 2018年11月26日 星期一 12时57分44秒
 ************************************************************************/
#include <stdio.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        if (ans % i == 0) continue;
        ans = ans / gcd(ans, i) * i;
    }
    printf("%d\n", ans);
    return 0;
}
