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
    namespace models {
      namespace earth {
        class LazyLoadedGeoMagneticFields;
      }
    }
    namespace frames {
      class LazyLoadedFrames;
    }
    namespace time {
      class LazyLoadedTimeScales;
    }
    namespace bodies {
      class LazyLoadedCelestialBodies;
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
          mid_init$_ff7cb6c242604316,
          mid_getCelestialBodies_2e5dcdcd5b8a5903,
          mid_getFrames_6b4dd5dc4c932983,
          mid_getGeoMagneticFields_dc04cadaa56dfc28,
          mid_getGravityFields_0b533a519307756d,
          mid_getTimeScales_0dcddb8d5df4bba7,
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
