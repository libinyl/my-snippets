#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>

/**
 *
 * 根据域名获取IP地址
 *
 * @param argc
 * @param argv
 * @return
 */


int main(int argc, char *argv[]){
    struct hostent *host;

    host = gethostbyname("www.baidu.com");

    printf("name: %s\n",host->h_name);
    printf("type: %d\n",host->h_addrtype);

    for(int i = 0; host->h_addr_list[i]; i++){
        printf("IP addr %d : %s \n", i+1,
               inet_ntoa(*(struct in_addr *)host->h_addr_list[i]));
    }

    return 0;
}