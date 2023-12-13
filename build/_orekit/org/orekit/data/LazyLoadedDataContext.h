#ifndef org_orekit_data_LazyLoadedDataContext_H
#define org_orekit_data_LazyLoadedDataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
      class DataProvidersManager;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class LazyLoadedGravityFields;
        }
      }
    }
    namespace time {
      class LazyLoadedTimeScales;
    }
    namespace frames {
      class LazyLoadedFrames;
    }
    namespace bodies {
      class LazyLoadedCelestialBodies;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_getCelestialBodies_6bb03bd1907ccb0e,
          mid_getDataProvidersManager_58cee34d9bd73f33,
          mid_getFrames_5dce20e74866c277,
          mid_getGeoMagneticFields_d89697effe31d95a,
          mid_getGravityFields_7edff6ac38775a4d,
          mid_getTimeScales_aca7b99124f1f289,
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
