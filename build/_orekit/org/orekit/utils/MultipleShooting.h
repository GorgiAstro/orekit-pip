#ifndef org_orekit_utils_MultipleShooting_H
#define org_orekit_utils_MultipleShooting_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class MultipleShooting : public ::java::lang::Object {
       public:
        enum {
          mid_compute_d751c1a57012b438,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultipleShooting(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultipleShooting(const MultipleShooting& obj) : ::java::lang::Object(obj) {}

        ::java::util::List compute() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(MultipleShooting);
      extern PyTypeObject *PY_TYPE(MultipleShooting);

      class t_MultipleShooting {
      public:
        PyObject_HEAD
        MultipleShooting object;
        static PyObject *wrap_Object(const MultipleShooting&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
