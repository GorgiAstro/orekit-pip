#ifndef org_orekit_frames_LazyLoadedEop_H
#define org_orekit_frames_LazyLoadedEop_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class TimeScale;
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace frames {
      class EopHistoryLoader;
      class EOPHistory;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LazyLoadedEop : public ::java::lang::Object {
       public:
        enum {
          mid_init$_92cedf0c8913c23b,
          mid_addDefaultEOP1980HistoryLoaders_76cf8f9004d5e7a3,
          mid_addDefaultEOP2000HistoryLoaders_76cf8f9004d5e7a3,
          mid_addEOPHistoryLoader_e1571b88fce42eed,
          mid_clearEOPHistoryLoaders_7ae3461a92a43152,
          mid_getDataProvidersManager_e1fc6728282cfec7,
          mid_getEOPHistory_7e3b1b9c6a8f4b4a,
          mid_setEOPContinuityThreshold_77e0f9a1f260e2e5,
          mid_setInterpolationDegree_0a2a1ac2721c0336,
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
