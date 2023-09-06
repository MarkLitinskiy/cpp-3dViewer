#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

#include "../model/model.h"
#include "../viewer_data.h"

class Controller {
 public:
  static Controller& getInstance(Model* m) {
    static Controller instance = Controller(m);
    return instance;
  }

 private:
  Controller() = delete;
  Controller(Model* m) : model(m) {}
  Model* model;

  void translate(coordinates& data);
  void rotationOx(coordinates& data);
  void rotationOy(coordinates& data);
  void rotationOz(coordinates& data);
  void rotateArr(coordinates& data);
  void scale(coordinates& data);
  void center(coordinates& data);
  void objectReduct(coordinates& data);
  void maxMin(coordinates& data);
}

#endif  // CONSOLEVIEW_H