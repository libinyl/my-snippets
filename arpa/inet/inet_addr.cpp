// 将用点分十进制字符串格式表示的IP地址转换成32位大端序整型
// 将 ip 地址从点分十进制转为网络(大端序)整型

#include <stdio.h>
#include <arpa/inet.h>

int main(){
    char *addr1 = "1.2.3.4";
    char *addr2 = "192.168.1.1";

    in_addr_t data;// in_addr_t 代表网络类型的 ip,socket 编程时采用此类型而非点分十进制

    data = inet_addr(addr1);// 字符串转网络类型 ip

    printf(" %s -> %#lx \n", addr1, (long)data );

    data = inet_addr(addr2);

    printf(" %s -> %#lx \n", addr2, (long)data );

    return 0;
}