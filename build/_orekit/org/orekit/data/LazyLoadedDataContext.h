#ifndef org_orekit_data_LazyLoadedDataContext_H
#define org_orekit_data_LazyLoadedDataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LazyLoadedFrames;
    }
    namespace models {
      namespace earth {
        class LazyLoadedGeoMagneticFields;
      }
    }
    namespace bodies {
      class LazyLoadedCelestialBodies;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class LazyLoadedGravityFields;
        }
      }
    }
    namespace data {
      class DataContext;
      class DataProvidersManager;
    }
    namespace time {
      class LazyLoadedTimeScales;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class LazyLoadedDataContext : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_getCelestialBodies_2192d5132b3243a4,
          mid_getDataProvidersManager_090dc74a0d7a5aef,
          mid_getFrames_19dab31df3f9900d,
          mid_getGeoMagneticFields_f938ea66f56d3454,
          mid_getGravityFields_0d8a4be514230626,
          mid_getTimeScales_52cbe31230c76b6b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LazyLoadedDataContext(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LazyLoadedDataContext(const LazyLoadedDataContext& obj) : ::java::lang::Object(obj) {}

        LazyLoadedDataContext();

        ::org::orekit::bodies::LazyLoadedCelestialBodies getCelestialBodies() const;
        ::org::orekit::data::DataProvidersManager getDataProvidersManager() const;
        ::org::orekit::frames::LazyLoadedFrames getFrames() const;
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields getGeoMagneticFields() const;
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields getGravityFields() const;
        ::org::orekit::time::LazyLoadedTimeScales getTimeScales() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(LazyLoadedDataContext);
      extern PyTypeObject *PY_TYPE(LazyLoadedDataContext);

      class t_LazyLoadedDataContext {
      public:
        PyObject_HEAD
        LazyLoadedDataContext object;
        static PyObject *wrap_Object(const LazyLoadedDataContext&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
