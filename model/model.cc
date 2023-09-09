#include "model.h"

void Model::OtherMethods(coordinates& data) {
  ModelAffineTransfer affineOther;

  switch (data.state) {
    case (affine::kCenter):
      affineOther.Center(data);
      break;
    case (affine::kTranslate):
      affineOther.Translate(data);
      break;
    case (affine::kObjectReduct):
      affineOther.ObjectReduct(data);
      break;
    case (affine::kMaxMin):
      affineOther.MaxMin(data);
      break;
    case (affine::kScale):
      affineOther.Scale(data);
      break;
    default:
      break;
  }
}

void Model::AffineRotate(coordinates& data) {
  ModelAffineTransfer affineTransfer;

  switch (data.state) {
    case (affine::kRotateX):
      affineTransfer.Rotate(RotateX(), data);
      break;
    case (affine::kRotateY):
      affineTransfer.Rotate(RotateY(), data);
      break;
    case (affine::kRotateZ):
      affineTransfer.Rotate(RotateZ(), data);
      break;
    default:
      break;
  }
}