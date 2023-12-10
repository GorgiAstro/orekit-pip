#ifndef org_orekit_orbits_LibrationOrbitFamily_H
#define org_orekit_orbits_LibrationOrbitFamily_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class LibrationOrbitFamily;
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

      class LibrationOrbitFamily : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_892c58b79d5b5e3a,
          mid_values_e93e460626f5302a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LibrationOrbitFamily(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LibrationOrbitFamily(const LibrationOrbitFamily& obj) : ::java::lang::Enum(obj) {}

        static LibrationOrbitFamily *NORTHERN;
        static LibrationOrbitFamily *SOUTHERN;

        static LibrationOrbitFamily valueOf(const ::java::lang::String &);
        static JArray< LibrationOrbitFamily > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(LibrationOrbitFamily);
      extern PyTypeObject *PY_TYPE(LibrationOrbitFamily);

      class t_LibrationOrbitFamily {
      public:
        PyObject_HEAD
        LibrationOrbitFamily object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LibrationOrbitFamily *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LibrationOrbitFamily&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LibrationOrbitFamily&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
