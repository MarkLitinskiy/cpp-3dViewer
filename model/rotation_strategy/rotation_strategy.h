#ifndef ROTATION_STRATEGY_H
#define ROTATION_STRATEGY_H

#include "../../viewer_data.h"

class RotationStrategy {
 public:
  RotationStrategy() {}
  virtual void Rotate(coordinates &data) const {}
  void RotateArr(coordinates &data);
};
class RotateX : public RotationStrategy {
 public:
  void Rotate(coordinates &data) const override{};
};

class RotateY : public RotationStrategy {
 public:
  void Rotate(coordinates &data) const override{};
};

class RotateZ : public RotationStrategy {
 public:
  void Rotate(coordinates &data) const override{};
};

#endif  // ROTATION_STRATEGY_H