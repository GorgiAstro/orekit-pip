#ifndef org_orekit_bodies_CelestialBodies_H
#define org_orekit_bodies_CelestialBodies_H

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

      class CelestialBodies : public ::java::lang::Object {
       public:
        enum {
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
