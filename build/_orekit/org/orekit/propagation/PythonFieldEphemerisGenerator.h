#ifndef org_orekit_propagation_PythonFieldEphemerisGenerator_H
#define org_orekit_propagation_PythonFieldEphemerisGenerator_H

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
      class FieldEphemerisGenerator;
      class FieldBoundedPropagator;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonFieldEphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getGeneratedEphemeris_5671a4f762a73711,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldEphemerisGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldEphemerisGenerator(const PythonFieldEphemerisGenerator& obj) : ::java::lang::Object(obj) {}

        PythonFieldEphemerisGenerator();

        void finalize() const;
        ::org::orekit::propagation::FieldBoundedPropagator getGeneratedEphemeris() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonFieldEphemerisGenerator);
      extern PyTypeObject *PY_TYPE(PythonFieldEphemerisGenerator);

      class t_PythonFieldEphemerisGenerator {
      public:
        PyObject_HEAD
        PythonFieldEphemerisGenerator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldEphemerisGenerator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldEphemerisGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldEphemerisGenerator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
