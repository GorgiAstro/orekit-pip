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
    namespace models {
      namespace earth {
        class GeoMagneticFields;
      }
    }
    namespace data {
      class LazyLoadedDataContext;
    }
    namespace time {
      class TimeScales;
    }
    namespace frames {
      class Frames;
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
          mid_getCelestialBodies_c39e314555ec4f4c,
          mid_getDefault_a521f36e1cec1ec6,
          mid_getFrames_e688bb8e310f8431,
          mid_getGeoMagneticFields_a3d479393ff4185d,
          mid_getGravityFields_b0af77e046f460cf,
          mid_getTimeScales_f0675560047d99cd,
          mid_setDefault_06bc870c2321c274,
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
