#ifndef org_orekit_propagation_events_AltitudeDetector_H
#define org_orekit_propagation_events_AltitudeDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AltitudeDetector;
      }
      class SpacecraftState;
    }
    namespace bodies {
      class BodyShape;
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

        class AltitudeDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_e9054d75a8746f4e,
            mid_init$_13a423acbe145cfc,
            mid_init$_6ef4fc4c23ba4b5c,
            mid_g_66a2f071e6ed0c06,
            mid_getAltitude_456d9a2f64d6b28d,
            mid_getBodyShape_883d26889ee03ca8,
            mid_create_1f8ac32f677c84eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AltitudeDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AltitudeDetector(const AltitudeDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          AltitudeDetector(jdouble, const ::org::orekit::bodies::BodyShape &);
          AltitudeDetector(jdouble, jdouble, const ::org::orekit::bodies::BodyShape &);
          AltitudeDetector(jdouble, jdouble, jdouble, const ::org::orekit::bodies::BodyShape &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getAltitude() const;
          ::org::orekit::bodies::BodyShape getBodyShape() const;
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
        extern PyType_Def PY_TYPE_DEF(AltitudeDetector);
        extern PyTypeObject *PY_TYPE(AltitudeDetector);

        class t_AltitudeDetector {
        public:
          PyObject_HEAD
          AltitudeDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AltitudeDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AltitudeDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AltitudeDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
