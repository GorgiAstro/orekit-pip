#ifndef org_orekit_propagation_PythonEphemerisGenerator_H
#define org_orekit_propagation_PythonEphemerisGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class BoundedPropagator;
      class EphemerisGenerator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonEphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getGeneratedEphemeris_08b52de56e2dfa9a,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
