#ifndef org_orekit_bodies_LazyLoadedCelestialBodies_H
#define org_orekit_bodies_LazyLoadedCelestialBodies_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
      class CelestialBodyLoader;
      class CelestialBodies;
    }
    namespace time {
      class TimeScales;
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
          mid_init$_a86554a897d98076,
          mid_addCelestialBodyLoader_5b4f658199a12bc3,
          mid_addDefaultCelestialBodyLoader_f5ffdf29129ef90a,
          mid_addDefaultCelestialBodyLoader_630071dd94c59169,
          mid_clearCelestialBodyCache_0640e6acf969ed28,
          mid_clearCelestialBodyCache_f5ffdf29129ef90a,
          mid_clearCelestialBodyLoaders_0640e6acf969ed28,
          mid_clearCelestialBodyLoaders_f5ffdf29129ef90a,
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
