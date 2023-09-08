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
  void SubMethods(coordinates& data);
  void Rotation(coordinates& data);

  void writing_data(info& data);
  void read_file(info& data);

 private:
  Controller() = delete;
  Controller(Model* m) : model(m) {}
  Model* model;
};

#endif  // CONSOLEVIEW_H
