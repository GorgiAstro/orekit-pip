#ifndef org_orekit_orbits_LibrationOrbitType_H
#define org_orekit_orbits_LibrationOrbitType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class LibrationOrbitType;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class LibrationOrbitType : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_c739d379d196a005,
          mid_values_de92c3816eb74f8c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LibrationOrbitType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LibrationOrbitType(const LibrationOrbitType& obj) : ::java::lang::Enum(obj) {}

        static LibrationOrbitType *HALO;
        static LibrationOrbitType *LYAPUNOV;

        static LibrationOrbitType valueOf(const ::java::lang::String &);
        static JArray< LibrationOrbitType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(LibrationOrbitType);
      extern PyTypeObject *PY_TYPE(LibrationOrbitType);

      class t_LibrationOrbitType {
      public:
        PyObject_HEAD
        LibrationOrbitType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LibrationOrbitType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LibrationOrbitType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LibrationOrbitType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
