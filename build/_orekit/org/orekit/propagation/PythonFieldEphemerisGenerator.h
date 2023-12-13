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
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldEphemerisGenerator;
      class FieldBoundedPropagator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonFieldEphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getGeneratedEphemeris_a6ef4ff996c2247f,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
