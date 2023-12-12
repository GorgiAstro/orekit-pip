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
      class CelestialBody;
      class CelestialBodies;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getBody_47d89fc2b3d16fd5,
          mid_getEarth_40e74583267ad550,
          mid_getEarthMoonBarycenter_40e74583267ad550,
          mid_getJupiter_40e74583267ad550,
          mid_getMars_40e74583267ad550,
          mid_getMercury_40e74583267ad550,
          mid_getMoon_40e74583267ad550,
          mid_getNeptune_40e74583267ad550,
          mid_getPluto_40e74583267ad550,
          mid_getSaturn_40e74583267ad550,
          mid_getSolarSystemBarycenter_40e74583267ad550,
          mid_getSun_40e74583267ad550,
          mid_getUranus_40e74583267ad550,
          mid_getVenus_40e74583267ad550,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
