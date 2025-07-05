// helloworld_rpi3.c

#include <linux/module.h>   // Required for all kernel modules
#include <linux/kernel.h>   // Required for KERN_INFO
#include <linux/init.h>     // Required for the macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple Hello World Kernel Module");
MODULE_VERSION("1.0");

static int __init helloworld_init(void) {
    printk(KERN_INFO "Hello, World from kernel module!\n");
    return 0; // Non-zero return means that the module couldn't be loaded.
}

static void __exit helloworld_exit(void) {
    printk(KERN_INFO "Goodbye, World from kernel module!\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);
