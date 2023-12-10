#ifndef org_orekit_propagation_events_LongitudeExtremumDetector_H
#define org_orekit_propagation_events_LongitudeExtremumDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class LongitudeExtremumDetector;
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

        class LongitudeExtremumDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_7c502fc601af6f77,
            mid_init$_b67b42078e2e878c,
            mid_g_432f3d328c15ec82,
            mid_getBody_6f78da94fd048d9d,
            mid_create_f4c7a8d14197c62d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongitudeExtremumDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongitudeExtremumDetector(const LongitudeExtremumDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          LongitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid &);
          LongitudeExtremumDetector(jdouble, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::BodyShape getBody() const;
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
        extern PyType_Def PY_TYPE_DEF(LongitudeExtremumDetector);
        extern PyTypeObject *PY_TYPE(LongitudeExtremumDetector);

        class t_LongitudeExtremumDetector {
        public:
          PyObject_HEAD
          LongitudeExtremumDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LongitudeExtremumDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LongitudeExtremumDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LongitudeExtremumDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
