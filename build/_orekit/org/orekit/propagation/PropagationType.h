#ifndef org_orekit_propagation_PropagationType_H
#define org_orekit_propagation_PropagationType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PropagationType : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_c8d3c34103499618,
          mid_values_8460ec0f36fd5d38,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PropagationType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PropagationType(const PropagationType& obj) : ::java::lang::Enum(obj) {}

        static PropagationType *MEAN;
        static PropagationType *OSCULATING;

        static PropagationType valueOf(const ::java::lang::String &);
        static JArray< PropagationType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PropagationType);
      extern PyTypeObject *PY_TYPE(PropagationType);

      class t_PropagationType {
      public:
        PyObject_HEAD
        PropagationType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PropagationType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PropagationType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PropagationType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
