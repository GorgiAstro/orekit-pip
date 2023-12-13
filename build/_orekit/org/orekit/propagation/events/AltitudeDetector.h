#ifndef org_orekit_propagation_events_AltitudeDetector_H
#define org_orekit_propagation_events_AltitudeDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace propagation {
      namespace events {
        class AltitudeDetector;
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

        class AltitudeDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_32e5db5e4ad291ee,
            mid_init$_a739cce113527776,
            mid_init$_451aa2fac482ca7b,
            mid_g_a17ea857ce74d258,
            mid_getAltitude_b74f83833fdad017,
            mid_getBodyShape_95d324082d4f411b,
            mid_create_0e173868746d06e5,
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
