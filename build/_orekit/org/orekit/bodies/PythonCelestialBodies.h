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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getBody_0ed99bba3e5bd60c,
          mid_getEarth_a1474f5cfab89b5e,
          mid_getEarthMoonBarycenter_a1474f5cfab89b5e,
          mid_getJupiter_a1474f5cfab89b5e,
          mid_getMars_a1474f5cfab89b5e,
          mid_getMercury_a1474f5cfab89b5e,
          mid_getMoon_a1474f5cfab89b5e,
          mid_getNeptune_a1474f5cfab89b5e,
          mid_getPluto_a1474f5cfab89b5e,
          mid_getSaturn_a1474f5cfab89b5e,
          mid_getSolarSystemBarycenter_a1474f5cfab89b5e,
          mid_getSun_a1474f5cfab89b5e,
          mid_getUranus_a1474f5cfab89b5e,
          mid_getVenus_a1474f5cfab89b5e,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
