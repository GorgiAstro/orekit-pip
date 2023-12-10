#ifndef org_orekit_rugged_utils_GridCreation_H
#define org_orekit_rugged_utils_GridCreation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class GridCreation : public ::java::lang::Object {
         public:
          enum {
            mid_createLinearGrid_db303b9d0c75305d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GridCreation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GridCreation(const GridCreation& obj) : ::java::lang::Object(obj) {}

          static JArray< jdouble > createLinearGrid(jdouble, jdouble, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(GridCreation);
        extern PyTypeObject *PY_TYPE(GridCreation);

        class t_GridCreation {
        public:
          PyObject_HEAD
          GridCreation object;
          static PyObject *wrap_Object(const GridCreation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
