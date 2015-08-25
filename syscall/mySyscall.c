#include <linux/linkage.h>
#include <linux/kernel.h>

static int numVezes = 0;

asmlinkage long sys_mySyscall(){
        printk("\nA system call mySyscall foi chamanda %d vezes\n", ++numVezes);
        return 0;
}
