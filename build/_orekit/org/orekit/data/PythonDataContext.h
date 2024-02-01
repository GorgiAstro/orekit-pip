#ifndef org_orekit_data_PythonDataContext_H
#define org_orekit_data_PythonDataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonDataContext : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getCelestialBodies_62495cefe741b009,
          mid_getFrames_34da2547798ee1dc,
          mid_getGeoMagneticFields_7d1b07207cbeab65,
          mid_getGravityFields_3af6c17fe31f8686,
          mid_getTimeScales_796d09eb9f0f96ef,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonDataContext(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonDataContext(const PythonDataContext& obj) : ::java::lang::Object(obj) {}

        PythonDataContext();

        void finalize() const;
        ::org::orekit::bodies::CelestialBodies getCelestialBodies() const;
        ::org::orekit::frames::Frames getFrames() const;
        ::org::orekit::models::earth::GeoMagneticFields getGeoMagneticFields() const;
        ::org::orekit::forces::gravity::potential::GravityFields getGravityFields() const;
        ::org::orekit::time::TimeScales getTimeScales() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PythonDataContext);
      extern PyTypeObject *PY_TYPE(PythonDataContext);

      class t_PythonDataContext {
      public:
        PyObject_HEAD
        PythonDataContext object;
        static PyObject *wrap_Object(const PythonDataContext&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
