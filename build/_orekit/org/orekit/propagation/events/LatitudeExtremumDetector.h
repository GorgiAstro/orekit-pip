#ifndef org_orekit_propagation_events_LatitudeExtremumDetector_H
#define org_orekit_propagation_events_LatitudeExtremumDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class LatitudeExtremumDetector;
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

        class LatitudeExtremumDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_fee9aa8bf77f755f,
            mid_init$_9c6b45b00f88cd51,
            mid_g_1bbf81d80c47ecdd,
            mid_getBody_f166528db337c659,
            mid_create_a5ae8afde810b907,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatitudeExtremumDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatitudeExtremumDetector(const LatitudeExtremumDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          LatitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid &);
          LatitudeExtremumDetector(jdouble, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &);

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
        extern PyType_Def PY_TYPE_DEF(LatitudeExtremumDetector);
        extern PyTypeObject *PY_TYPE(LatitudeExtremumDetector);

        class t_LatitudeExtremumDetector {
        public:
          PyObject_HEAD
          LatitudeExtremumDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LatitudeExtremumDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LatitudeExtremumDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LatitudeExtremumDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
