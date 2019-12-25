#include <sys/time.h>
#include <cstdio>
#include <unistd.h>


/**
 *
 * gettimeofday
 * 把当前的时间放入 struct timeval 结构体中返回。注意：
 * 精确级别,微妙级别
 * 受系统时间修改影响
 * 返回的秒数是从1970年1月1日0时0分0秒开始

 * int gettimeofday(struct timeval *tv, struct timezone *tz);
 */

float timediff(struct timeval *begin,
               struct timeval *end){
    int n;
    // 先计算两个时间点相差多少微秒
    n = ( end->tv_sec - begin->tv_sec ) * 1000000
        + ( end->tv_usec - begin->tv_usec );

    // 转化为毫秒返回
    return (float) (n / 1000);
}

int main(void){
    struct timeval begin, end;

    gettimeofday(&begin, 0);

    // 这里让程序挂起一秒
    printf("do something here...");
    sleep(1);

    gettimeofday(&end, 0);

    printf("running time : %fms\n", timediff(&begin, &end));

    return 0;
}