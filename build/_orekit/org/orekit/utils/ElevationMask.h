#ifndef org_orekit_utils_ElevationMask_H
#define org_orekit_utils_ElevationMask_H

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
    namespace utils {

      class ElevationMask : public ::java::lang::Object {
       public:
        enum {
          mid_init$_07adb42ffaa97d31,
          mid_getElevation_04fd0666b613d2ab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ElevationMask(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ElevationMask(const ElevationMask& obj) : ::java::lang::Object(obj) {}

        ElevationMask(const JArray< JArray< jdouble > > &);

        jdouble getElevation(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ElevationMask);
      extern PyTypeObject *PY_TYPE(ElevationMask);

      class t_ElevationMask {
      public:
        PyObject_HEAD
        ElevationMask object;
        static PyObject *wrap_Object(const ElevationMask&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
