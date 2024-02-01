#ifndef org_orekit_propagation_events_MagneticFieldDetector_H
#define org_orekit_propagation_events_MagneticFieldDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class MagneticFieldDetector;
      }
      class SpacecraftState;
    }
    namespace models {
      namespace earth {
        class GeoMagneticFieldFactory$FieldModel;
      }
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
            mid_init$_ea029b6cf1682d56,
            mid_init$_b6a40dd499347870,
            mid_init$_787d50daab686bc3,
            mid_init$_ad585fabb24f419c,
            mid_g_b443ba1cc794b916,
            mid_init_14deaae988292d42,
            mid_create_af6c8ef2d17ccd69,
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
