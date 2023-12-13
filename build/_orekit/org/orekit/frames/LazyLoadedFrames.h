#ifndef org_orekit_frames_LazyLoadedFrames_H
#define org_orekit_frames_LazyLoadedFrames_H

#include "org/orekit/frames/AbstractFrames.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace bodies {
      class CelestialBodies;
    }
    namespace frames {
      class EOPHistory;
      class EopHistoryLoader;
      class LazyLoadedEop;
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
    namespace frames {

      class LazyLoadedFrames : public ::org::orekit::frames::AbstractFrames {
       public:
        enum {
          mid_init$_a562e213c7979e22,
          mid_addDefaultEOP1980HistoryLoaders_e39b9463875d2aea,
          mid_addDefaultEOP2000HistoryLoaders_e39b9463875d2aea,
          mid_addEOPHistoryLoader_f075adbabba5d6bc,
          mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2,
          mid_getEOPHistory_a77e9d6bc0da2439,
          mid_setEOPContinuityThreshold_8ba9fe7a847cecad,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LazyLoadedFrames(jobject obj) : ::org::orekit::frames::AbstractFrames(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LazyLoadedFrames(const LazyLoadedFrames& obj) : ::org::orekit::frames::AbstractFrames(obj) {}

        LazyLoadedFrames(const ::org::orekit::frames::LazyLoadedEop &, const ::org::orekit::time::TimeScales &, const ::org::orekit::bodies::CelestialBodies &);

        void addDefaultEOP1980HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        void addDefaultEOP2000HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        void addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::EopHistoryLoader &) const;
        void clearEOPHistoryLoaders() const;
        ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        void setEOPContinuityThreshold(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LazyLoadedFrames);
      extern PyTypeObject *PY_TYPE(LazyLoadedFrames);

      class t_LazyLoadedFrames {
      public:
        PyObject_HEAD
        LazyLoadedFrames object;
        static PyObject *wrap_Object(const LazyLoadedFrames&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
