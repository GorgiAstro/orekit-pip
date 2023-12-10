#ifndef org_orekit_bodies_CelestialBodyFactory_H
#define org_orekit_bodies_CelestialBodyFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class LazyLoadedCelestialBodies;
      class CelestialBodyLoader;
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
          mid_addCelestialBodyLoader_eeafd0d01c10e9d5,
          mid_addDefaultCelestialBodyLoader_d0bc48d5b00dc40c,
          mid_addDefaultCelestialBodyLoader_6a2001eff0605f71,
          mid_clearCelestialBodyCache_0fa09c18fee449d5,
          mid_clearCelestialBodyCache_d0bc48d5b00dc40c,
          mid_clearCelestialBodyLoaders_0fa09c18fee449d5,
          mid_clearCelestialBodyLoaders_d0bc48d5b00dc40c,
          mid_getBody_68e48076ef831536,
          mid_getCelestialBodies_fc81056d907ed286,
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
