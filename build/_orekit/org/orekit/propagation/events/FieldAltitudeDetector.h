#ifndef org_orekit_propagation_events_FieldAltitudeDetector_H
#define org_orekit_propagation_events_FieldAltitudeDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace propagation {
      class FieldSpacecraftState;
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
            mid_init$_a998b8675f61545e,
            mid_init$_48e1ab7629a8c2a4,
            mid_init$_6cbd24da1a73ca86,
            mid_g_cc79c2733879de35,
            mid_getAltitude_e6d4d3215c30992a,
            mid_getBodyShape_883d26889ee03ca8,
            mid_create_452ae8def470195c,
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
