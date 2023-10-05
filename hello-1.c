#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>
#include <linux/stat.h>

int init_module(void)
{
    pr_info("Hello World!\n");

    return 0;
}

void cleanup_module(void)
{
    pr_info("Goodbye World!\n");
}

MODULE_LICENSE("GPL");
