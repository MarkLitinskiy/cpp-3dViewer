#include "controller.h"

void Controller::translate(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::translate(data);
}

void Controller::rotationOx(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::rotationOx(data);
}

void Controller::rotationOy(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::rotationOy(data);
}

void Controller::rotationOz(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::rotationOz(data);
}

void Controller::rotateArr(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::rotateArr(data);
}

void Controller::scale(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::scale(data);
}

void Controller::center(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::center(data);
}

void Controller::objectReduct(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::objectReduct(data);
}

void Controller::maxMin(coordinates &data) {
  model->affineTransfer->ModelAffineTransfer::maxMin(data);
}