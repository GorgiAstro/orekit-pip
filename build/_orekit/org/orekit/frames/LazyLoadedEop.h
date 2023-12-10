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
      class EOPHistory;
      class EopHistoryLoader;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class TimeScales;
      class TimeScale;
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
          mid_init$_2ce23204880a56c8,
          mid_addDefaultEOP1980HistoryLoaders_ff1d8967dbd30cfb,
          mid_addDefaultEOP2000HistoryLoaders_ff1d8967dbd30cfb,
          mid_addEOPHistoryLoader_0f554c95baa6eac9,
          mid_clearEOPHistoryLoaders_0fa09c18fee449d5,
          mid_getDataProvidersManager_69fa4d0abe16d651,
          mid_getEOPHistory_4f61b29504ebc31d,
          mid_setEOPContinuityThreshold_17db3a65980d3441,
          mid_setInterpolationDegree_99803b0791f320ff,
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
