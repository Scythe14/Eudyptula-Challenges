KERNEL_VERSION	=	$(shell uname -r)

SRC		=	hello_world.c
OBJ		=	$(SRC:.c=.o)

obj-m		+=	hello_world.o

keylogger-objs	:=	$(OBJ)

all:
	make -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) clean
