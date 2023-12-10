#ifndef org_orekit_bodies_PythonCelestialBodyLoader_H
#define org_orekit_bodies_PythonCelestialBodyLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBodyLoader;
      class CelestialBody;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class PythonCelestialBodyLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_loadCelestialBody_68e48076ef831536,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonCelestialBodyLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonCelestialBodyLoader(const PythonCelestialBodyLoader& obj) : ::java::lang::Object(obj) {}

        PythonCelestialBodyLoader();

        void finalize() const;
        ::org::orekit::bodies::CelestialBody loadCelestialBody(const ::java::lang::String &) const;
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
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(PythonCelestialBodyLoader);
      extern PyTypeObject *PY_TYPE(PythonCelestialBodyLoader);

      class t_PythonCelestialBodyLoader {
      public:
        PyObject_HEAD
        PythonCelestialBodyLoader object;
        static PyObject *wrap_Object(const PythonCelestialBodyLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
