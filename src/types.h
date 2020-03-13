typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;

typedef struct	//jps - added lock_t typedef
{
  int ticket;
  int turn;
} lock_t;
