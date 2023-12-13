#ifndef org_orekit_bodies_CelestialBodyLoader_H
#define org_orekit_bodies_CelestialBodyLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
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
    namespace bodies {

      class CelestialBodyLoader : public ::java::lang::Object {
       public:
        enum {
          mid_loadCelestialBody_7eb4325e211386e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CelestialBodyLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CelestialBodyLoader(const CelestialBodyLoader& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::bodies::CelestialBody loadCelestialBody(const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(CelestialBodyLoader);
      extern PyTypeObject *PY_TYPE(CelestialBodyLoader);

      class t_CelestialBodyLoader {
      public:
        PyObject_HEAD
        CelestialBodyLoader object;
        static PyObject *wrap_Object(const CelestialBodyLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
