#include <dlfcn.h>
void *dlopen(const char *filename,int flag);
char *dlerror(void);
void *dlsym(void *handle,const char *symbol);
int dlclosed(void *handle);
