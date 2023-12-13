#ifndef org_orekit_rugged_linesensor_SensorPixel_H
#define org_orekit_rugged_linesensor_SensorPixel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        class SensorPixel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_369b4c97255d5afa,
            mid_getLineNumber_b74f83833fdad017,
            mid_getPixelNumber_b74f83833fdad017,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SensorPixel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SensorPixel(const SensorPixel& obj) : ::java::lang::Object(obj) {}

          SensorPixel(jdouble, jdouble);

          jdouble getLineNumber() const;
          jdouble getPixelNumber() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        extern PyType_Def PY_TYPE_DEF(SensorPixel);
        extern PyTypeObject *PY_TYPE(SensorPixel);

        class t_SensorPixel {
        public:
          PyObject_HEAD
          SensorPixel object;
          static PyObject *wrap_Object(const SensorPixel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
