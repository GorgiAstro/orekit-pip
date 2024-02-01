#ifndef org_orekit_propagation_events_FieldAltitudeDetector_H
#define org_orekit_propagation_events_FieldAltitudeDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace bodies {
      class BodyShape;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class FieldAltitudeDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_9e9c9e1e4c63e1b9,
            mid_init$_e3317e8db204f3c0,
            mid_init$_c09966b10dc0ead9,
            mid_g_ac6fccc69d1b2d9e,
            mid_getAltitude_08d37e3f77b7239d,
            mid_getBodyShape_6f2d25f6f71d01ca,
            mid_create_856529a2987fc1ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAltitudeDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAltitudeDetector(const FieldAltitudeDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::BodyShape &);
          FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::BodyShape &);
          FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::BodyShape &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::hipparchus::CalculusFieldElement getAltitude() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAltitudeDetector);
        extern PyTypeObject *PY_TYPE(FieldAltitudeDetector);

        class t_FieldAltitudeDetector {
        public:
          PyObject_HEAD
          FieldAltitudeDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAltitudeDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAltitudeDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAltitudeDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
