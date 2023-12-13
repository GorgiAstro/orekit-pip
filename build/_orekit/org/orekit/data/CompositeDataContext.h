#ifndef org_orekit_data_CompositeDataContext_H
#define org_orekit_data_CompositeDataContext_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class CompositeDataContext : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ca20a72c7a06a48a,
          mid_getCelestialBodies_379576bb08948576,
          mid_getFrames_19f184be91611afc,
          mid_getGeoMagneticFields_78e2356802c487c4,
          mid_getGravityFields_045bd2a3a054f1f1,
          mid_getTimeScales_d1a571f8b033e2d3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CompositeDataContext(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CompositeDataContext(const CompositeDataContext& obj) : ::java::lang::Object(obj) {}

        CompositeDataContext(const ::org::orekit::time::TimeScales &, const ::org::orekit::frames::Frames &, const ::org::orekit::bodies::CelestialBodies &, const ::org::orekit::forces::gravity::potential::GravityFields &, const ::org::orekit::models::earth::GeoMagneticFields &);

        ::org::orekit::bodies::CelestialBodies getCelestialBodies() const;
        ::org::orekit::frames::Frames getFrames() const;
        ::org::orekit::models::earth::GeoMagneticFields getGeoMagneticFields() const;
        ::org::orekit::forces::gravity::potential::GravityFields getGravityFields() const;
        ::org::orekit::time::TimeScales getTimeScales() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(CompositeDataContext);
      extern PyTypeObject *PY_TYPE(CompositeDataContext);

      class t_CompositeDataContext {
      public:
        PyObject_HEAD
        CompositeDataContext object;
        static PyObject *wrap_Object(const CompositeDataContext&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
