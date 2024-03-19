typedef struct position {
  double x, y, z; /*! Coordinates in mm */
} position_t;

typedef struct pose {
  double x,y,z; /*! coordinates in mm */
  double rx,ry,rz; /*! rotation angles in degrees */
} pose_t;


typedef struct imagergb {
  int dims; /*! number of planes */
  int rows; /*! Vertical dimension */
  int cols; /*! Horizontal dimension */
  int format; /*! RGB, BGR, ... */
  uchar * data; /*! Pointer to buffer containing pixel data */
} image_t;
