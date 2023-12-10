#ifndef org_orekit_data_LazyLoadedDataContext_H
#define org_orekit_data_LazyLoadedDataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class LazyLoadedTimeScales;
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
    namespace bodies {
      class LazyLoadedCelestialBodies;
    }
    namespace frames {
      class LazyLoadedFrames;
    }
    namespace models {
      namespace earth {
        class LazyLoadedGeoMagneticFields;
      }
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
          mid_init$_7ae3461a92a43152,
          mid_getCelestialBodies_f685d2a163f9f12b,
          mid_getDataProvidersManager_e1fc6728282cfec7,
          mid_getFrames_279cf148ff8a6939,
          mid_getGeoMagneticFields_2e55f41473500ba6,
          mid_getGravityFields_4859dab0854ea5fb,
          mid_getTimeScales_8c0eab743ddad863,
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
