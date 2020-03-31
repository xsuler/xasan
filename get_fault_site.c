#include <sys/ioctl.h>
#include <linux/types.h>
#include <fcntl.h>
#include <xenctrl.h>
#include <xen/sys/privcmd.h>
#include <errno.h>
#include <xen/xen.h>



int main(int argc, char** argv){
        int fd;
        int ret;
        ret=0;
        long long int fault_site=0;
        privcmd_hypercall_t my_hypercall={
                __HYPERVISOR_get_trace,
                {(long long int)&fault_site,0,0,0,0}
        };

        fd = open("/proc/xen/privcmd",O_RDWR);
        if (fd<0){
                perror("cannot open privcmd");
                return 0;
        }
        ret=ioctl(fd,IOCTL_PRIVCMD_HYPERCALL, &my_hypercall);

	printf("%lld",fault_site);
        return 0;

}



