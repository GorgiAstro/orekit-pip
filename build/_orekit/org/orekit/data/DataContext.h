#ifndef org_orekit_data_DataContext_H
#define org_orekit_data_DataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
        }
      }
    }
    namespace frames {
      class Frames;
    }
    namespace data {
      class LazyLoadedDataContext;
    }
    namespace time {
      class TimeScales;
    }
    namespace models {
      namespace earth {
        class GeoMagneticFields;
      }
    }
    namespace bodies {
      class CelestialBodies;
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

      class DataContext : public ::java::lang::Object {
       public:
        enum {
          mid_getCelestialBodies_a9d31e254defc040,
          mid_getDefault_df499ec1a8491644,
          mid_getFrames_efd6f6d0fc89f7ce,
          mid_getGeoMagneticFields_ac4b7520cc429937,
          mid_getGravityFields_d0ea355ca6d68d00,
          mid_getTimeScales_ac9ef17f951ae11a,
          mid_setDefault_e1b39bbe28030bc1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataContext(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataContext(const DataContext& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::bodies::CelestialBodies getCelestialBodies() const;
        static ::org::orekit::data::LazyLoadedDataContext getDefault();
        ::org::orekit::frames::Frames getFrames() const;
        ::org::orekit::models::earth::GeoMagneticFields getGeoMagneticFields() const;
        ::org::orekit::forces::gravity::potential::GravityFields getGravityFields() const;
        ::org::orekit::time::TimeScales getTimeScales() const;
        static void setDefault(const ::org::orekit::data::LazyLoadedDataContext &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataContext);
      extern PyTypeObject *PY_TYPE(DataContext);

      class t_DataContext {
      public:
        PyObject_HEAD
        DataContext object;
        static PyObject *wrap_Object(const DataContext&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
