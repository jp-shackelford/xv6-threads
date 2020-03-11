struct stat;
struct rtcdate;

// system calls
int fork(void);
int exit(void) __attribute__((noreturn));
int wait(void);
int pipe(int*);
int write(int, const void*, int);
int read(int, void*, int);
int close(int);
int kill(int);
int exec(char*, char**);
int open(const char*, int);
int mknod(const char*, short, short);
int unlink(const char*);
int fstat(int fd, struct stat*);
int link(const char*, const char*);
int mkdir(const char*);
int chdir(const char*);
int dup(int);
int getpid(void);
char* sbrk(int);
int sleep(int);
int uptime(void);
int clone(void(*fcn)(void*, void*), void* arg1, void* arg2, void* stack); //jps - added clone() to user.h
int join(void** stack);	//jps - added join() to user.h

// ulib.c
int stat(const char*, struct stat*);
char* strcpy(char*, const char*);
void *memmove(void*, const void*, int);
char* strchr(const char*, char c);
int strcmp(const char*, const char*);
void printf(int, const char*, ...);
char* gets(char*, int max);
uint strlen(const char*);
void* memset(void*, int, uint);
void* malloc(uint);
void free(void*);
int atoi(const char*);
int thread_create(void(*start_routine)(void*, void*), void* arg1, void* arg2); //jps - added thread_create in user.h
int thread_join(void);		//jps - added thread_join in user.h
void lock_acquire(lock_t*);	//jps - added lock_acquire in user.h
void lock_release(lock_t*);	//jps - added lock_release in user.h
void lock_init(lock_t*);	//jps - added lock_init in user.h
