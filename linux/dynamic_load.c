#include <stdio.h>
#include <dlfcn.h>
int main()
{
int r,op,a,b;
void *handler;
int(*p)(int , int);
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
printf("Enter your option:\n1:sum\n2.mul\n");
scanf("%d",&op);
handler=dlopen("./libxyz.o",RTLD_LAZY);//load library into RAM
        if(handler==0)
        {
                printf("%s\n",dlerror());
                return 1;
        }
        switch(op)
        {
                case 1:
                        p=dlsym(handler,"sum");//if successfully loaded then locate function address
                        if(p==0)
                        {
                                printf("%s\n",dlerror());//if address is not resolved then print error
                                return 1;
                        }
                        r=(*p)(a,b);
                        printf("r=%d\n",r);
                        break;
                case 2:
                        p=dlsym(handler,"mul");
                        if(p==0)
                        {
                                printf("%s\n",dlerror());
                                return 1;
                        }
                        r=(*p)(a,b);
                        printf("%d\n",r);
                        break;

                default:
                        printf("wrong option\n");
                        break;
        }
                dlclose(handler);
return 0;
}