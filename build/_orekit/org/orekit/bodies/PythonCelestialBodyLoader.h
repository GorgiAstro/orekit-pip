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
      class CelestialBody;
      class CelestialBodyLoader;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_loadCelestialBody_47d89fc2b3d16fd5,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
