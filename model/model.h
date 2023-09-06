#ifndef MODEL_H
#define MODEL_H

#include "model_affine_transfer.h"
#include "model_parser.h"

class Model {
 public:
  Model(){};
  ~Model() {
    delete parser;
    delete affineTransfer;
  }
  ModelParser* parser = new ModelParser();
  ModelAffineTransfer* affineTransfer = new ModelAffineTransfer();
}

#endif