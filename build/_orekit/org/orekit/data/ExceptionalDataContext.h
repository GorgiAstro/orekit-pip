#ifndef org_orekit_data_ExceptionalDataContext_H
#define org_orekit_data_ExceptionalDataContext_H

#include "org/orekit/data/LazyLoadedDataContext.h"

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
    namespace forces {
      namespace gravity {
        namespace potential {
          class LazyLoadedGravityFields;
        }
      }
    }
    namespace bodies {
      class LazyLoadedCelestialBodies;
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

      class ExceptionalDataContext : public ::org::orekit::data::LazyLoadedDataContext {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_getCelestialBodies_2192d5132b3243a4,
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
