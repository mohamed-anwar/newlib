AUTOMAKE_OPTIONS = cygnus
INCLUDES = $(NEWLIB_CFLAGS) $(CROSS_CFLAGS) $(TARGET_CFLAGS)
AM_CCASFLAGS = $(INCLUDES)

SUBDIRS = pthread .
SUBLIBS = pthread/libpthread.la

noinst_LIBRARIES = lib.a

if MAY_SUPPLY_SYSCALLS
extra_objs = \
	fcntl.o    \
	mman.o     \
	select.o   \
	socket.o   \
	stdlib.o   \
	termios.o  \
	times.o	   \
	utsname.o  \
	dirent.o   \
	ioctl.o    \
	mount.o    \
	signal.o   \
	stat.o     \
	syscalls.o \
	time.o 	   \
	unistd.o   \
	wait.o
else
extra_objs =
endif

lib_a_SOURCES =
lib_a_LIBADD = $(extra_objs)
EXTRA_lib_a_SOURCES = \
	fcntl.c    \
	mman.c     \
	select.c   \
	socket.c   \
	stdlib.c   \
	termios.c  \
	times.c	   \
	utsname.c  \
	dirent.c   \
	ioctl.c    \
	mount.c    \
	signal.c   \
	stat.c     \
	syscalls.c \
	time.c 	   \
	unistd.c   \
	wait.c
lib_a_DEPENDENCIES = $(extra_objs)
lib_a_CCASFLAGS = $(AM_CCASFLAGS)
lib_a_CFLAGS = $(AM_CFLAGS)

all: crt0.o crti.o crtn.o

%.o: %.s
	$(CC) -c $< -o $@

ACLOCAL_AMFLAGS = -I ../../..
CONFIG_STATUS_DEPENDENCIES = $(newlib_basedir)/configure.host
