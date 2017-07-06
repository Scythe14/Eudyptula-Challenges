/*
**  Dany Bouca Nova
**      Hello World kernel module.
*/

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/keyboard.h>

#define LICENCE "GPL"
#define VERSION "1.0"
#define AUTHOR "Dany Bouca Nova <dany.boucanova@gmail.com>"

static int	__init keylog_init(void)
{
  printk(KERN_INFO "Hello World Init !\n");
  return (0);
}

static void	__exit keylog_end(void)
{
  printk(KERN_INFO "Hello World End!\n");

}

module_init(keylog_init);
module_exit(keylog_end);

MODULE_LICENSE(LICENCE);
MODULE_AUTHOR(AUTHOR);
MODULE_VERSION(VERSION);

