#ifndef org_orekit_data_DataContext_H
#define org_orekit_data_DataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
    }
    namespace models {
      namespace earth {
        class GeoMagneticFields;
      }
    }
    namespace bodies {
      class CelestialBodies;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class GravityFields;
        }
      }
    }
    namespace data {
      class LazyLoadedDataContext;
    }
    namespace time {
      class TimeScales;
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
          mid_getCelestialBodies_379576bb08948576,
          mid_getDefault_f2d5dcb77667b80d,
          mid_getFrames_19f184be91611afc,
          mid_getGeoMagneticFields_78e2356802c487c4,
          mid_getGravityFields_045bd2a3a054f1f1,
          mid_getTimeScales_d1a571f8b033e2d3,
          mid_setDefault_cb1436d190ab0111,
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
