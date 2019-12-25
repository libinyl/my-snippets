#include <cstdio>
#include <cstring>
#include <arpa/inet.h>
/**
 *
 * 网络字节序转点分十进制
 */

void wrongexa()
{

    struct in_addr addr1, addr2;
    char *str1, *str2;

    addr1.s_addr = htonl(0x1020304);
    addr2.s_addr = htonl(0xc0a80101);

    str1 = inet_ntoa(addr1);
    str2 = inet_ntoa(addr2);

    printf("%#lx -> %s \n", (long) addr1.s_addr, str1);
    printf("%#lx -> %s \n", (long) addr2.s_addr, str2);
}

void okexa()
{
    struct in_addr addr1, addr2;
    char str1[20], str2[20];
    bzero(str1,sizeof(str1));
    bzero(str2,sizeof(str2));

    addr1.s_addr = htonl(0x1020304);
    addr2.s_addr = htonl(0xc0a80101);

    memcpy(str1, inet_ntoa(addr1), sizeof(str1)); // 网络字节序转点分十进制
    memcpy(str2, inet_ntoa(addr2), sizeof(str2));

    printf("%#lx -> %s \n", (long) addr1.s_addr, str1);
    printf("%#lx -> %s \n", (long) addr2.s_addr, str2);
}

int main(void)
{
    wrongexa();
    printf("------\n");
    okexa();
}