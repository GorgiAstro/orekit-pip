#ifndef org_orekit_propagation_PythonEphemerisGenerator_H
#define org_orekit_propagation_PythonEphemerisGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class BoundedPropagator;
      class EphemerisGenerator;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonEphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getGeneratedEphemeris_fa108fc36df3791a,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonEphemerisGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonEphemerisGenerator(const PythonEphemerisGenerator& obj) : ::java::lang::Object(obj) {}

        PythonEphemerisGenerator();

        void finalize() const;
        ::org::orekit::propagation::BoundedPropagator getGeneratedEphemeris() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonEphemerisGenerator);
      extern PyTypeObject *PY_TYPE(PythonEphemerisGenerator);

      class t_PythonEphemerisGenerator {
      public:
        PyObject_HEAD
        PythonEphemerisGenerator object;
        static PyObject *wrap_Object(const PythonEphemerisGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
