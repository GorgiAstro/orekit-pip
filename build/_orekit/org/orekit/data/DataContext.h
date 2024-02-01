#ifndef org_orekit_data_DataContext_H
#define org_orekit_data_DataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace data {
      class LazyLoadedDataContext;
    }
    namespace frames {
      class Frames;
    }
    namespace time {
      class TimeScales;
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
          mid_getCelestialBodies_62495cefe741b009,
          mid_getDefault_9617066f56887d20,
          mid_getFrames_34da2547798ee1dc,
          mid_getGeoMagneticFields_7d1b07207cbeab65,
          mid_getGravityFields_3af6c17fe31f8686,
          mid_getTimeScales_796d09eb9f0f96ef,
          mid_setDefault_038b3f0ac7485dff,
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
