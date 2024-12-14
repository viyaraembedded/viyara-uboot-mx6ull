#include <command.h>

int do_hi(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
 {
        printf("Hello World\r\n");
        return 0;
 }

U_BOOT_CMD(hi,1,0,do_hi, "hello world","It will print hello woorld");


