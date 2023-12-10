#ifndef org_orekit_propagation_events_AltitudeDetector_H
#define org_orekit_propagation_events_AltitudeDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class AltitudeDetector;
      }
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
            mid_init$_255e7aecae0d87ec,
            mid_init$_016c693111bbdf71,
            mid_init$_b638f92fce635632,
            mid_g_432f3d328c15ec82,
            mid_getAltitude_dff5885c2c873297,
            mid_getBodyShape_6f78da94fd048d9d,
            mid_create_61b3279c75dd8106,
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
