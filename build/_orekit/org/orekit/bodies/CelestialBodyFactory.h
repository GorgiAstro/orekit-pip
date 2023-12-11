#ifndef org_orekit_bodies_CelestialBodyFactory_H
#define org_orekit_bodies_CelestialBodyFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
      class CelestialBodyLoader;
      class LazyLoadedCelestialBodies;
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
          mid_addCelestialBodyLoader_5b4f658199a12bc3,
          mid_addDefaultCelestialBodyLoader_f5ffdf29129ef90a,
          mid_addDefaultCelestialBodyLoader_630071dd94c59169,
          mid_clearCelestialBodyCache_0640e6acf969ed28,
          mid_clearCelestialBodyCache_f5ffdf29129ef90a,
          mid_clearCelestialBodyLoaders_0640e6acf969ed28,
          mid_clearCelestialBodyLoaders_f5ffdf29129ef90a,
          mid_getBody_47d89fc2b3d16fd5,
          mid_getCelestialBodies_2192d5132b3243a4,
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
