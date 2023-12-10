#ifndef org_orekit_propagation_PythonFieldEphemerisGenerator_H
#define org_orekit_propagation_PythonFieldEphemerisGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldBoundedPropagator;
      class FieldEphemerisGenerator;
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

      class PythonFieldEphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getGeneratedEphemeris_a5b4612f864868f8,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
