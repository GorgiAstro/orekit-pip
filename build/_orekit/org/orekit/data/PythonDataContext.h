#ifndef org_orekit_data_PythonDataContext_H
#define org_orekit_data_PythonDataContext_H

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
      class DataContext;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getCelestialBodies_a9d31e254defc040,
          mid_getFrames_efd6f6d0fc89f7ce,
          mid_getGeoMagneticFields_ac4b7520cc429937,
          mid_getGravityFields_d0ea355ca6d68d00,
          mid_getTimeScales_ac9ef17f951ae11a,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
