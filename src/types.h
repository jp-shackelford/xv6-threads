typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;

typedef struct	//jps - added lock_t typedef
{
  uint ticket;
  uint turn;
} lock_t;
