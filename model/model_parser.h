#ifndef MODEL_PARSER_H
#define MODEL_PARSER_H

#include <_stdio.h>
class ModelParser {
 public:
  ModelParser(){};

 private:
  int writing_data(FILE *file, float **v, unsigned int **f);
  int read_file(FILE *file, float **v, unsigned int **f, int *size_v,
                int *size_f);
  int open_file(const char *name_file, float **v, unsigned int **f, int *size_v,
                int *size_f);
};

#endif
