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
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class TimeScale;
      class TimeScales;
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace frames {
      class EOPHistory;
      class EopHistoryLoader;
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
          mid_init$_f44b5b919beca6bf,
          mid_addDefaultEOP1980HistoryLoaders_cf2d09f334430f03,
          mid_addDefaultEOP2000HistoryLoaders_cf2d09f334430f03,
          mid_addEOPHistoryLoader_de5bd84d562632cf,
          mid_clearEOPHistoryLoaders_ff7cb6c242604316,
          mid_getDataProvidersManager_f0a5ee63a7def5aa,
          mid_getEOPHistory_0876d7ae4f9b6882,
          mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b,
          mid_setInterpolationDegree_8fd427ab23829bf5,
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
