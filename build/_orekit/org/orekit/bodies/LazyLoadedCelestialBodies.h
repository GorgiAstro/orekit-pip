#ifndef org_orekit_bodies_LazyLoadedCelestialBodies_H
#define org_orekit_bodies_LazyLoadedCelestialBodies_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class TimeScales;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class CelestialBodyLoader;
      class CelestialBodies;
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

      class LazyLoadedCelestialBodies : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4af8a8f1bc66ed68,
          mid_addCelestialBodyLoader_eeafd0d01c10e9d5,
          mid_addDefaultCelestialBodyLoader_d0bc48d5b00dc40c,
          mid_addDefaultCelestialBodyLoader_6a2001eff0605f71,
          mid_clearCelestialBodyCache_0fa09c18fee449d5,
          mid_clearCelestialBodyCache_d0bc48d5b00dc40c,
          mid_clearCelestialBodyLoaders_0fa09c18fee449d5,
          mid_clearCelestialBodyLoaders_d0bc48d5b00dc40c,
          mid_getBody_68e48076ef831536,
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

        explicit LazyLoadedCelestialBodies(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LazyLoadedCelestialBodies(const LazyLoadedCelestialBodies& obj) : ::java::lang::Object(obj) {}

        LazyLoadedCelestialBodies(const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScales &, const ::org::orekit::frames::Frame &);

        void addCelestialBodyLoader(const ::java::lang::String &, const ::org::orekit::bodies::CelestialBodyLoader &) const;
        void addDefaultCelestialBodyLoader(const ::java::lang::String &) const;
        void addDefaultCelestialBodyLoader(const ::java::lang::String &, const ::java::lang::String &) const;
        void clearCelestialBodyCache() const;
        void clearCelestialBodyCache(const ::java::lang::String &) const;
        void clearCelestialBodyLoaders() const;
        void clearCelestialBodyLoaders(const ::java::lang::String &) const;
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
      extern PyType_Def PY_TYPE_DEF(LazyLoadedCelestialBodies);
      extern PyTypeObject *PY_TYPE(LazyLoadedCelestialBodies);

      class t_LazyLoadedCelestialBodies {
      public:
        PyObject_HEAD
        LazyLoadedCelestialBodies object;
        static PyObject *wrap_Object(const LazyLoadedCelestialBodies&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
