#ifndef org_orekit_bodies_LazyLoadedCelestialBodies_H
#define org_orekit_bodies_LazyLoadedCelestialBodies_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
    }
    namespace bodies {
      class CelestialBodyLoader;
      class CelestialBody;
      class CelestialBodies;
    }
    namespace frames {
      class Frame;
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
          mid_init$_abc7f47ffa11a8b2,
          mid_addCelestialBodyLoader_6d7aad336ec9f802,
          mid_addDefaultCelestialBodyLoader_e939c6558ae8d313,
          mid_addDefaultCelestialBodyLoader_96073c87872b7a97,
          mid_clearCelestialBodyCache_7ae3461a92a43152,
          mid_clearCelestialBodyCache_e939c6558ae8d313,
          mid_clearCelestialBodyLoaders_7ae3461a92a43152,
          mid_clearCelestialBodyLoaders_e939c6558ae8d313,
          mid_getBody_29f199e59c05cc68,
          mid_getEarth_798caa59db6076aa,
          mid_getEarthMoonBarycenter_798caa59db6076aa,
          mid_getJupiter_798caa59db6076aa,
          mid_getMars_798caa59db6076aa,
          mid_getMercury_798caa59db6076aa,
          mid_getMoon_798caa59db6076aa,
          mid_getNeptune_798caa59db6076aa,
          mid_getPluto_798caa59db6076aa,
          mid_getSaturn_798caa59db6076aa,
          mid_getSolarSystemBarycenter_798caa59db6076aa,
          mid_getSun_798caa59db6076aa,
          mid_getUranus_798caa59db6076aa,
          mid_getVenus_798caa59db6076aa,
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
