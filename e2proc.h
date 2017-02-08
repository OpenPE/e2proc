#ifndef E2_PROC_H
#define E2_PROC_H

#include <linux/proc_fs.h>

extern int install_e2_procs(char *path, read_proc_t *read_func, write_proc_t *write_func, void *data);
extern int remove_e2_procs(char *path, read_proc_t *read_func, write_proc_t *write_func);

#endif

