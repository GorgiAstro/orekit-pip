#ifndef org_orekit_propagation_events_FieldAltitudeDetector_H
#define org_orekit_propagation_events_FieldAltitudeDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace propagation {
      class FieldSpacecraftState;
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

        class FieldAltitudeDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_5ec6031e829231e8,
            mid_init$_2f5de0815fa9837a,
            mid_init$_3b841b473efd4d38,
            mid_g_2203631097e94c79,
            mid_getAltitude_81520b552cb3fa26,
            mid_getBodyShape_95d324082d4f411b,
            mid_create_d1ec281a05feb29c,
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
