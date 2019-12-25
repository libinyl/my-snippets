#include <stdio.h>
#include <arpa/inet.h>
/**
 * htonl = host to net, long
 * htons = host to net, short
 * ntohl = net to host, long
 * ntohs = net to host, short
 *
 *
 * @return
 */

int main()
{

    unsigned short hosts = 0x1234;
    unsigned short nets;
    unsigned long hostl = 0x12345678;
    unsigned long netl;

    nets = htons(hosts);
    netl = htonl(hostl);

    printf("Host ordered short: %#x \n", hosts);
    printf("Network ordered short: %#x \n", nets);

    printf("Host ordered long: %#lx \n", hostl);
    printf("Network ordered long: %#lx \n", netl);

    return 0;
}