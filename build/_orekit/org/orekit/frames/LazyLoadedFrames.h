#ifndef org_orekit_frames_LazyLoadedFrames_H
#define org_orekit_frames_LazyLoadedFrames_H

#include "org/orekit/frames/AbstractFrames.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class LazyLoadedEop;
      class EopHistoryLoader;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class TimeScales;
    }
    namespace bodies {
      class CelestialBodies;
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
          mid_init$_80ebadfaa96c5ac9,
          mid_addDefaultEOP1980HistoryLoaders_0be9bb25c5e386d0,
          mid_addDefaultEOP2000HistoryLoaders_0be9bb25c5e386d0,
          mid_addEOPHistoryLoader_0f554c95baa6eac9,
          mid_clearEOPHistoryLoaders_0fa09c18fee449d5,
          mid_getEOPHistory_f7b9f8d7c24d861d,
          mid_setEOPContinuityThreshold_17db3a65980d3441,
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
