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
    namespace models {
      namespace earth {
        class GeoMagneticFields;
      }
    }
    namespace data {
      class DataContext;
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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getCelestialBodies_c39e314555ec4f4c,
          mid_getFrames_e688bb8e310f8431,
          mid_getGeoMagneticFields_a3d479393ff4185d,
          mid_getGravityFields_b0af77e046f460cf,
          mid_getTimeScales_f0675560047d99cd,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
