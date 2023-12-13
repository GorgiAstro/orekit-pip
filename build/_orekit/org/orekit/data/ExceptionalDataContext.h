#ifndef org_orekit_data_ExceptionalDataContext_H
#define org_orekit_data_ExceptionalDataContext_H

#include "org/orekit/data/LazyLoadedDataContext.h"

namespace org {
  namespace orekit {
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

      class ExceptionalDataContext : public ::org::orekit::data::LazyLoadedDataContext {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_getCelestialBodies_6bb03bd1907ccb0e,
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

        explicit ExceptionalDataContext(jobject obj) : ::org::orekit::data::LazyLoadedDataContext(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExceptionalDataContext(const ExceptionalDataContext& obj) : ::org::orekit::data::LazyLoadedDataContext(obj) {}

        ExceptionalDataContext();

        ::org::orekit::bodies::LazyLoadedCelestialBodies getCelestialBodies() const;
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
      extern PyType_Def PY_TYPE_DEF(ExceptionalDataContext);
      extern PyTypeObject *PY_TYPE(ExceptionalDataContext);

      class t_ExceptionalDataContext {
      public:
        PyObject_HEAD
        ExceptionalDataContext object;
        static PyObject *wrap_Object(const ExceptionalDataContext&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
