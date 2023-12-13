#ifndef org_orekit_bodies_CelestialBodyFactory_H
#define org_orekit_bodies_CelestialBodyFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBodyLoader;
      class CelestialBody;
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
          mid_addCelestialBodyLoader_3ecf386d8e3fd776,
          mid_addDefaultCelestialBodyLoader_734b91ac30d5f9b4,
          mid_addDefaultCelestialBodyLoader_a627ad9c5959309d,
          mid_clearCelestialBodyCache_a1fa5dae97ea5ed2,
          mid_clearCelestialBodyCache_734b91ac30d5f9b4,
          mid_clearCelestialBodyLoaders_a1fa5dae97ea5ed2,
          mid_clearCelestialBodyLoaders_734b91ac30d5f9b4,
          mid_getBody_7eb4325e211386e9,
          mid_getCelestialBodies_6bb03bd1907ccb0e,
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
