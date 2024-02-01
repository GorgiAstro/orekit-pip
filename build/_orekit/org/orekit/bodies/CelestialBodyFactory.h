#ifndef org_orekit_bodies_CelestialBodyFactory_H
#define org_orekit_bodies_CelestialBodyFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBodyLoader;
      class LazyLoadedCelestialBodies;
      class CelestialBody;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class CelestialBodyFactory : public ::java::lang::Object {
       public:
        enum {
          mid_addCelestialBodyLoader_dcd989e3e2312275,
          mid_addDefaultCelestialBodyLoader_105e1eadb709d9ac,
          mid_addDefaultCelestialBodyLoader_771aee6c143cc92a,
          mid_clearCelestialBodyCache_ff7cb6c242604316,
          mid_clearCelestialBodyCache_105e1eadb709d9ac,
          mid_clearCelestialBodyLoaders_ff7cb6c242604316,
          mid_clearCelestialBodyLoaders_105e1eadb709d9ac,
          mid_getBody_0ed99bba3e5bd60c,
          mid_getCelestialBodies_2e5dcdcd5b8a5903,
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

        explicit CelestialBodyFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CelestialBodyFactory(const CelestialBodyFactory& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *EARTH;
        static ::java::lang::String *EARTH_MOON;
        static ::java::lang::String *JUPITER;
        static ::java::lang::String *MARS;
        static ::java::lang::String *MERCURY;
        static ::java::lang::String *MOON;
        static ::java::lang::String *NEPTUNE;
        static ::java::lang::String *PLUTO;
        static ::java::lang::String *SATURN;
        static ::java::lang::String *SOLAR_SYSTEM_BARYCENTER;
        static ::java::lang::String *SUN;
        static ::java::lang::String *URANUS;
        static ::java::lang::String *VENUS;

        static void addCelestialBodyLoader(const ::java::lang::String &, const ::org::orekit::bodies::CelestialBodyLoader &);
        static void addDefaultCelestialBodyLoader(const ::java::lang::String &);
        static void addDefaultCelestialBodyLoader(const ::java::lang::String &, const ::java::lang::String &);
        static void clearCelestialBodyCache();
        static void clearCelestialBodyCache(const ::java::lang::String &);
        static void clearCelestialBodyLoaders();
        static void clearCelestialBodyLoaders(const ::java::lang::String &);
        static ::org::orekit::bodies::CelestialBody getBody(const ::java::lang::String &);
        static ::org::orekit::bodies::LazyLoadedCelestialBodies getCelestialBodies();
        static ::org::orekit::bodies::CelestialBody getEarth();
        static ::org::orekit::bodies::CelestialBody getEarthMoonBarycenter();
        static ::org::orekit::bodies::CelestialBody getJupiter();
        static ::org::orekit::bodies::CelestialBody getMars();
        static ::org::orekit::bodies::CelestialBody getMercury();
        static ::org::orekit::bodies::CelestialBody getMoon();
        static ::org::orekit::bodies::CelestialBody getNeptune();
        static ::org::orekit::bodies::CelestialBody getPluto();
        static ::org::orekit::bodies::CelestialBody getSaturn();
        static ::org::orekit::bodies::CelestialBody getSolarSystemBarycenter();
        static ::org::orekit::bodies::CelestialBody getSun();
        static ::org::orekit::bodies::CelestialBody getUranus();
        static ::org::orekit::bodies::CelestialBody getVenus();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(CelestialBodyFactory);
      extern PyTypeObject *PY_TYPE(CelestialBodyFactory);

      class t_CelestialBodyFactory {
      public:
        PyObject_HEAD
        CelestialBodyFactory object;
        static PyObject *wrap_Object(const CelestialBodyFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
