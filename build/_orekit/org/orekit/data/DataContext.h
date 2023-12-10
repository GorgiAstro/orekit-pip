#ifndef org_orekit_data_DataContext_H
#define org_orekit_data_DataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
    }
    namespace frames {
      class Frames;
    }
    namespace models {
      namespace earth {
        class GeoMagneticFields;
      }
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
        }
      }
    }
    namespace bodies {
      class CelestialBodies;
    }
    namespace data {
      class LazyLoadedDataContext;
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
          mid_getCelestialBodies_6b0502739530e079,
          mid_getDefault_8ea83c0b6ccdde9c,
          mid_getFrames_6a1d0c689f9e630b,
          mid_getGeoMagneticFields_cfa6ccfb44255043,
          mid_getGravityFields_f5e7fe4d5e10b51a,
          mid_getTimeScales_5912acf3bafa785f,
          mid_setDefault_0e77a5e34faa6b84,
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
