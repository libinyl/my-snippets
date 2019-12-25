#include <sys/epoll.h>

int main()
{
    int epfd = epoll_create(0); // size非负即可
}