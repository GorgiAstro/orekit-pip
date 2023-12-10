#ifndef org_orekit_bodies_PythonCelestialBodies_H
#define org_orekit_bodies_PythonCelestialBodies_H

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
      class CelestialBodies;
      class CelestialBody;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class PythonCelestialBodies : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getBody_68e48076ef831536,
          mid_getEarth_624686a38a6b107c,
          mid_getEarthMoonBarycenter_624686a38a6b107c,
          mid_getJupiter_624686a38a6b107c,
          mid_getMars_624686a38a6b107c,
          mid_getMercury_624686a38a6b107c,
          mid_getMoon_624686a38a6b107c,
          mid_getNeptune_624686a38a6b107c,
          mid_getPluto_624686a38a6b107c,
          mid_getSaturn_624686a38a6b107c,
          mid_getSolarSystemBarycenter_624686a38a6b107c,
          mid_getSun_624686a38a6b107c,
          mid_getUranus_624686a38a6b107c,
          mid_getVenus_624686a38a6b107c,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonCelestialBodies(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonCelestialBodies(const PythonCelestialBodies& obj) : ::java::lang::Object(obj) {}

        PythonCelestialBodies();

        void finalize() const;
        ::org::orekit::bodies::CelestialBody getBody(const ::java::lang::String &) const;
        ::org::orekit::bodies::CelestialBody getEarth() const;
        ::org::orekit::bodies::CelestialBody getEarthMoonBarycenter() const;
        ::org::orekit::bodies::CelestialBody getJupiter() const;
        ::org::orekit::bodies::CelestialBody getMars() const;
        ::org::orekit::bodies::CelestialBody getMercury() const;
        ::org::orekit::bodies::CelestialBody getMoon() const;
        ::org::orekit::bodies::CelestialBody getNeptune() const;
        ::org::orekit::bodies::CelestialBody getPluto() const;
        ::org::orekit::bodies::CelestialBody getSaturn() const;
        ::org::orekit::bodies::CelestialBody getSolarSystemBarycenter() const;
        ::org::orekit::bodies::CelestialBody getSun() const;
        ::org::orekit::bodies::CelestialBody getUranus() const;
        ::org::orekit::bodies::CelestialBody getVenus() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonCelestialBodies);
      extern PyTypeObject *PY_TYPE(PythonCelestialBodies);

      class t_PythonCelestialBodies {
      public:
        PyObject_HEAD
        PythonCelestialBodies object;
        static PyObject *wrap_Object(const PythonCelestialBodies&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
