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
    namespace frames {
      class EOPHistory;
      class EopHistoryLoader;
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
          mid_init$_71b020e53c8af149,
          mid_addDefaultEOP1980HistoryLoaders_6b707ef41041f12b,
          mid_addDefaultEOP2000HistoryLoaders_6b707ef41041f12b,
          mid_addEOPHistoryLoader_f075adbabba5d6bc,
          mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2,
          mid_getDataProvidersManager_58cee34d9bd73f33,
          mid_getEOPHistory_8c7e98e10e57372e,
          mid_setEOPContinuityThreshold_8ba9fe7a847cecad,
          mid_setInterpolationDegree_44ed599e93e8a30c,
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
