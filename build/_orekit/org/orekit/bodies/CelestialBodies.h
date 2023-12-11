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
