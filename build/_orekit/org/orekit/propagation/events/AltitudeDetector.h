#ifndef org_orekit_propagation_events_AltitudeDetector_H
#define org_orekit_propagation_events_AltitudeDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class AltitudeDetector;
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

        class AltitudeDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_2247a31cd26b38fe,
            mid_init$_1fa3531d15a85c84,
            mid_init$_86ba5ff452ee7e6f,
            mid_g_b443ba1cc794b916,
            mid_getAltitude_9981f74b2d109da6,
            mid_getBodyShape_6f2d25f6f71d01ca,
            mid_create_b295424f86f6d84b,
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
