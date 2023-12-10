#ifndef org_orekit_bodies_JPLEphemeridesLoader_H
#define org_orekit_bodies_JPLEphemeridesLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class JPLEphemeridesLoader$EphemerisType;
      class CelestialBodyLoader;
      class CelestialBody;
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class TimeScales;
    }
    namespace frames {
      class Frame;
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

      class JPLEphemeridesLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_7680e4f675d5ce38,
          mid_init$_58a957ea41d89c4d,
          mid_getLoadedAstronomicalUnit_dff5885c2c873297,
          mid_getLoadedConstant_2ae203d757702f8f,
          mid_getLoadedEarthMoonMassRatio_dff5885c2c873297,
          mid_getLoadedGravitationalCoefficient_7aef2115c46be48a,
          mid_getMaxChunksDuration_dff5885c2c873297,
          mid_loadCelestialBody_68e48076ef831536,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit JPLEphemeridesLoader(jobject obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        JPLEphemeridesLoader(const JPLEphemeridesLoader& obj) : ::org::orekit::data::AbstractSelfFeedingLoader(obj) {}

        static ::java::lang::String *DEFAULT_DE_SUPPORTED_NAMES;
        static ::java::lang::String *DEFAULT_INPOP_SUPPORTED_NAMES;

        JPLEphemeridesLoader(const ::java::lang::String &, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType &);
        JPLEphemeridesLoader(const ::java::lang::String &, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScales &, const ::org::orekit::frames::Frame &);

        jdouble getLoadedAstronomicalUnit() const;
        jdouble getLoadedConstant(const JArray< ::java::lang::String > &) const;
        jdouble getLoadedEarthMoonMassRatio() const;
        jdouble getLoadedGravitationalCoefficient(const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType &) const;
        jdouble getMaxChunksDuration() const;
        ::org::orekit::bodies::CelestialBody loadCelestialBody(const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(JPLEphemeridesLoader);
      extern PyTypeObject *PY_TYPE(JPLEphemeridesLoader);

      class t_JPLEphemeridesLoader {
      public:
        PyObject_HEAD
        JPLEphemeridesLoader object;
        static PyObject *wrap_Object(const JPLEphemeridesLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
