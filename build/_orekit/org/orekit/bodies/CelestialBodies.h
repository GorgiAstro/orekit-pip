#ifndef org_orekit_bodies_CelestialBodies_H
#define org_orekit_bodies_CelestialBodies_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class CelestialBodies : public ::java::lang::Object {
       public:
        enum {
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
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CelestialBodies(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CelestialBodies(const CelestialBodies& obj) : ::java::lang::Object(obj) {}

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
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(CelestialBodies);
      extern PyTypeObject *PY_TYPE(CelestialBodies);

      class t_CelestialBodies {
      public:
        PyObject_HEAD
        CelestialBodies object;
        static PyObject *wrap_Object(const CelestialBodies&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
