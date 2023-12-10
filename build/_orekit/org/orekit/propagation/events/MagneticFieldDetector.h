#ifndef org_orekit_propagation_events_MagneticFieldDetector_H
#define org_orekit_propagation_events_MagneticFieldDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        class GeoMagneticFieldFactory$FieldModel;
      }
    }
    namespace data {
      class DataContext;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class MagneticFieldDetector;
      }
      class SpacecraftState;
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
            mid_init$_0f2b960fda308707,
            mid_init$_bfc5e09252b02996,
            mid_init$_3150a28820b8fe06,
            mid_init$_2535aa10ce2c998e,
            mid_g_432f3d328c15ec82,
            mid_init_826b4eda94da4e78,
            mid_create_5bcfd052dc70cb39,
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
