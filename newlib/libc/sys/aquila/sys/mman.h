#ifndef _SYS_MMAN_H
#define _SYS_MMAN_H

#include <sys/types.h>

#define PROT_NONE   0x00000
#define PROT_READ   0x00001
#define PROT_WRITE  0x00002
#define PROT_EXEC   0x00004

#define MAP_FAILED  ((void *) 0)
#define MAP_FIXED   0x00001
#define MAP_PRIVATE 0x00002
#define MAP_SHARED  0x00004


void  *mmap(void *, size_t, int, int, int, off_t);
int    munmap(void *, size_t);
 

#endif /* ! _SYS_MMAN_H */
