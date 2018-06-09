#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


//MODULE_VERSION("0.1");

static int __init challenge1_module_init(void)
{
   printk(KERN_DEBUG "Hello World!\n");
   return 0;
}

static void __exit challenge1_module_exit(void)
{
  printk(KERN_DEBUG "Exit module\n");
}

module_init(challenge1_module_init);
module_exit(challenge1_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Abhay RAvi Chandran");
MODULE_DESCRIPTION("Edyuptyla challenge 1");
