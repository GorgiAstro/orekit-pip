#ifndef org_orekit_propagation_EphemerisGenerator_H
#define org_orekit_propagation_EphemerisGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class BoundedPropagator;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class EphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_getGeneratedEphemeris_6c7bb9da59d24b03,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EphemerisGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EphemerisGenerator(const EphemerisGenerator& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::propagation::BoundedPropagator getGeneratedEphemeris() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(EphemerisGenerator);
      extern PyTypeObject *PY_TYPE(EphemerisGenerator);

      class t_EphemerisGenerator {
      public:
        PyObject_HEAD
        EphemerisGenerator object;
        static PyObject *wrap_Object(const EphemerisGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
