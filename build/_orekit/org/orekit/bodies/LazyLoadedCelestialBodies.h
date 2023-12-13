#ifndef org_orekit_bodies_LazyLoadedCelestialBodies_H
#define org_orekit_bodies_LazyLoadedCelestialBodies_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBodyLoader;
      class CelestialBodies;
      class CelestialBody;
    }
    namespace frames {
      class Frame;
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class TimeScales;
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
          mid_init$_1d81efd1143d307c,
          mid_addCelestialBodyLoader_3ecf386d8e3fd776,
          mid_addDefaultCelestialBodyLoader_734b91ac30d5f9b4,
          mid_addDefaultCelestialBodyLoader_a627ad9c5959309d,
          mid_clearCelestialBodyCache_a1fa5dae97ea5ed2,
          mid_clearCelestialBodyCache_734b91ac30d5f9b4,
          mid_clearCelestialBodyLoaders_a1fa5dae97ea5ed2,
          mid_clearCelestialBodyLoaders_734b91ac30d5f9b4,
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
