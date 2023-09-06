#ifndef MODEL_AFFINE_TRANSFER_H
#define MODEL_AFFINE_TRANSFER_H

#include "../viewer_data.h"

class ModelAffineTransfer {
 public:
  ModelAffineTransfer(){};
  void translate(coordinates &data);

  void rotationOx(coordinates &data);
  void rotationOy(coordinates &data);
  void rotationOz(coordinates &data);
  void rotateArr(coordinates &data);

  void scale(coordinates &data);
  void center(coordinates &data);
  void objectReduct(coordinates &data);
  void maxMin(coordinates &data);
}

#endif  // MODEL_AFFINE_TRANSFER_H