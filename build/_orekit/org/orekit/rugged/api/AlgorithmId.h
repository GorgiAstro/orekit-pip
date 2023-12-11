#ifndef org_orekit_rugged_api_AlgorithmId_H
#define org_orekit_rugged_api_AlgorithmId_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class AlgorithmId;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        class AlgorithmId : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_4dd032d6be1cc9d4,
            mid_values_739a706506ae4ced,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AlgorithmId(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AlgorithmId(const AlgorithmId& obj) : ::java::lang::Enum(obj) {}

          static AlgorithmId *BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY;
          static AlgorithmId *CONSTANT_ELEVATION_OVER_ELLIPSOID;
          static AlgorithmId *DUVENHAGE;
          static AlgorithmId *DUVENHAGE_FLAT_BODY;
          static AlgorithmId *IGNORE_DEM_USE_ELLIPSOID;

          static AlgorithmId valueOf(const ::java::lang::String &);
          static JArray< AlgorithmId > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        extern PyType_Def PY_TYPE_DEF(AlgorithmId);
        extern PyTypeObject *PY_TYPE(AlgorithmId);

        class t_AlgorithmId {
        public:
          PyObject_HEAD
          AlgorithmId object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AlgorithmId *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AlgorithmId&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AlgorithmId&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
