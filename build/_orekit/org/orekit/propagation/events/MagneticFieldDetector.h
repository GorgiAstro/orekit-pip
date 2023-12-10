#ifndef org_orekit_propagation_events_MagneticFieldDetector_H
#define org_orekit_propagation_events_MagneticFieldDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace models {
      namespace earth {
        class GeoMagneticFieldFactory$FieldModel;
      }
    }
    namespace data {
      class DataContext;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class MagneticFieldDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
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
    namespace propagation {
      namespace events {

        class MagneticFieldDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_428e0682e401f288,
            mid_init$_872b82e95dd440ae,
            mid_init$_45c00007c9df9fce,
            mid_init$_b45d2518a3f0d70b,
            mid_g_66a2f071e6ed0c06,
            mid_init_3d13474d79f5e7bc,
            mid_create_addb10d7335cc8cb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MagneticFieldDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MagneticFieldDetector(const MagneticFieldDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          MagneticFieldDetector(jdouble, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, const ::org::orekit::bodies::OneAxisEllipsoid &);
          MagneticFieldDetector(jdouble, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, const ::org::orekit::bodies::OneAxisEllipsoid &, jboolean);
          MagneticFieldDetector(jdouble, jdouble, jdouble, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, const ::org::orekit::bodies::OneAxisEllipsoid &, jboolean);
          MagneticFieldDetector(jdouble, jdouble, jdouble, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel &, const ::org::orekit::bodies::OneAxisEllipsoid &, jboolean, const ::org::orekit::data::DataContext &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(MagneticFieldDetector);
        extern PyTypeObject *PY_TYPE(MagneticFieldDetector);

        class t_MagneticFieldDetector {
        public:
          PyObject_HEAD
          MagneticFieldDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MagneticFieldDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MagneticFieldDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MagneticFieldDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
