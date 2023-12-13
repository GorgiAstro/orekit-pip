#ifndef org_orekit_data_PythonDataContext_H
#define org_orekit_data_PythonDataContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
    }
    namespace data {
      class DataContext;
    }
    namespace bodies {
      class CelestialBodies;
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
    namespace time {
      class TimeScales;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getCelestialBodies_379576bb08948576,
          mid_getFrames_19f184be91611afc,
          mid_getGeoMagneticFields_78e2356802c487c4,
          mid_getGravityFields_045bd2a3a054f1f1,
          mid_getTimeScales_d1a571f8b033e2d3,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
