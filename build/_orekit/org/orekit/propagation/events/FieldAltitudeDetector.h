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
            mid_init$_5eb423019e583d00,
            mid_init$_daaca5e108517253,
            mid_init$_87e4531e9decf5a6,
            mid_g_41a008afe53da855,
            mid_getAltitude_eba8e72a22c984ac,
            mid_getBodyShape_6f78da94fd048d9d,
            mid_create_11da04d559f0cfb7,
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
