LIB_SRC_LOC = /lib/modules
obj-m += challenge1.o

all:
	 make -C $(LIB_SRC_LOC)/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C $(LIB_SRC_LOC)/$(shell uname -r)/build M=$(PWD) clean 
