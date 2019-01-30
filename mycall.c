#include <linux/linkage.h>

asmlinkage long sys_mycall(int i){
	return 1+66;
}
