#ifndef org_orekit_frames_LazyLoadedFrames_H
#define org_orekit_frames_LazyLoadedFrames_H

#include "org/orekit/frames/AbstractFrames.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace frames {
      class EopHistoryLoader;
      class LazyLoadedEop;
      class EOPHistory;
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
          mid_init$_640b47445a3d772b,
          mid_addDefaultEOP1980HistoryLoaders_0ed06339391372ae,
          mid_addDefaultEOP2000HistoryLoaders_0ed06339391372ae,
          mid_addEOPHistoryLoader_e1571b88fce42eed,
          mid_clearEOPHistoryLoaders_7ae3461a92a43152,
          mid_getEOPHistory_7544a283da003d74,
          mid_setEOPContinuityThreshold_77e0f9a1f260e2e5,
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
