#ifndef org_orekit_frames_LazyLoadedEop_H
#define org_orekit_frames_LazyLoadedEop_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class EopHistoryLoader;
      class EOPHistory;
    }
    namespace time {
      class TimeScales;
      class TimeScale;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataProvidersManager;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LazyLoadedEop : public ::java::lang::Object {
       public:
        enum {
          mid_init$_451bc3479d2995cd,
          mid_addDefaultEOP1980HistoryLoaders_2fb90663bf421a82,
          mid_addDefaultEOP2000HistoryLoaders_2fb90663bf421a82,
          mid_addEOPHistoryLoader_4f61b75864dcff87,
          mid_clearEOPHistoryLoaders_0640e6acf969ed28,
          mid_getDataProvidersManager_090dc74a0d7a5aef,
          mid_getEOPHistory_972b11dad6ca0bb8,
          mid_setEOPContinuityThreshold_10f281d777284cea,
          mid_setInterpolationDegree_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LazyLoadedEop(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LazyLoadedEop(const LazyLoadedEop& obj) : ::java::lang::Object(obj) {}

        LazyLoadedEop(const ::org::orekit::data::DataProvidersManager &);

        void addDefaultEOP1980HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::util::function::Supplier &) const;
        void addDefaultEOP2000HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::util::function::Supplier &) const;
        void addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::EopHistoryLoader &) const;
        void clearEOPHistoryLoaders() const;
        ::org::orekit::data::DataProvidersManager getDataProvidersManager() const;
        ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean, const ::org::orekit::time::TimeScales &) const;
        void setEOPContinuityThreshold(jdouble) const;
        void setInterpolationDegree(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LazyLoadedEop);
      extern PyTypeObject *PY_TYPE(LazyLoadedEop);

      class t_LazyLoadedEop {
      public:
        PyObject_HEAD
        LazyLoadedEop object;
        static PyObject *wrap_Object(const LazyLoadedEop&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
