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
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getBody_7eb4325e211386e9,
          mid_getEarth_5df52e80cbb5eb85,
          mid_getEarthMoonBarycenter_5df52e80cbb5eb85,
          mid_getJupiter_5df52e80cbb5eb85,
          mid_getMars_5df52e80cbb5eb85,
          mid_getMercury_5df52e80cbb5eb85,
          mid_getMoon_5df52e80cbb5eb85,
          mid_getNeptune_5df52e80cbb5eb85,
          mid_getPluto_5df52e80cbb5eb85,
          mid_getSaturn_5df52e80cbb5eb85,
          mid_getSolarSystemBarycenter_5df52e80cbb5eb85,
          mid_getSun_5df52e80cbb5eb85,
          mid_getUranus_5df52e80cbb5eb85,
          mid_getVenus_5df52e80cbb5eb85,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
