#include <rpc/rpc.h>
#include "hw.h"

char **hw_1_svc(void *a, struct svc_req *req) {
    static char msg[256];
    static char *p;

    printf("getting ready to return value\n");
    strcpy(msg, "Hello world");
    p = msg;
    printf("Returning...\n");

    return(&p);
}