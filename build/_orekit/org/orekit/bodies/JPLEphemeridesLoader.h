#ifndef org_orekit_bodies_JPLEphemeridesLoader_H
#define org_orekit_bodies_JPLEphemeridesLoader_H

#include "org/orekit/data/AbstractSelfFeedingLoader.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBodyLoader;
      class JPLEphemeridesLoader$EphemerisType;
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

      class JPLEphemeridesLoader : public ::org::orekit::data::AbstractSelfFeedingLoader {
       public:
        enum {
          mid_init$_8c2eb18e5f7e24ef,
          mid_init$_e667cb27874bfd41,
          mid_getLoadedAstronomicalUnit_9981f74b2d109da6,
          mid_getLoadedConstant_185800def9fcd7d5,
          mid_getLoadedEarthMoonMassRatio_9981f74b2d109da6,
          mid_getLoadedGravitationalCoefficient_45844783763090ed,
          mid_getMaxChunksDuration_9981f74b2d109da6,
          mid_loadCelestialBody_0ed99bba3e5bd60c,
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
