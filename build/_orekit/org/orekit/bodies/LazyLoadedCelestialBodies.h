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
    namespace time {
      class TimeScales;
    }
    namespace data {
      class DataProvidersManager;
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
          mid_init$_186d3bb1917abfa9,
          mid_addCelestialBodyLoader_dcd989e3e2312275,
          mid_addDefaultCelestialBodyLoader_105e1eadb709d9ac,
          mid_addDefaultCelestialBodyLoader_771aee6c143cc92a,
          mid_clearCelestialBodyCache_ff7cb6c242604316,
          mid_clearCelestialBodyCache_105e1eadb709d9ac,
          mid_clearCelestialBodyLoaders_ff7cb6c242604316,
          mid_clearCelestialBodyLoaders_105e1eadb709d9ac,
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
