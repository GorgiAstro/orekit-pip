#ifndef org_orekit_propagation_FieldEphemerisGenerator_H
#define org_orekit_propagation_FieldEphemerisGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldBoundedPropagator;
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

      class FieldEphemerisGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_getGeneratedEphemeris_39f09e653b07efff,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldEphemerisGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldEphemerisGenerator(const FieldEphemerisGenerator& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::propagation::FieldBoundedPropagator getGeneratedEphemeris() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldEphemerisGenerator);
      extern PyTypeObject *PY_TYPE(FieldEphemerisGenerator);

      class t_FieldEphemerisGenerator {
      public:
        PyObject_HEAD
        FieldEphemerisGenerator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldEphemerisGenerator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldEphemerisGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldEphemerisGenerator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
