#ifndef org_orekit_data_ExceptionalDataContext_H
#define org_orekit_data_ExceptionalDataContext_H

#include "org/orekit/data/LazyLoadedDataContext.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class LazyLoadedCelestialBodies;
    }
    namespace time {
      class LazyLoadedTimeScales;
    }
    namespace frames {
      class LazyLoadedFrames;
    }
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
          mid_init$_0fa09c18fee449d5,
          mid_getCelestialBodies_fc81056d907ed286,
          mid_getFrames_ac56fa33f5ed59f4,
          mid_getGeoMagneticFields_df53e62f422caa08,
          mid_getGravityFields_6e6081b92fd46837,
          mid_getTimeScales_81309dd1495ca0f7,
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
