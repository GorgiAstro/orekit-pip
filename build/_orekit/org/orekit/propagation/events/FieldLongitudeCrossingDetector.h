#ifndef org_orekit_propagation_events_FieldLongitudeCrossingDetector_H
#define org_orekit_propagation_events_FieldLongitudeCrossingDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class Field;
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

        class FieldLongitudeCrossingDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_2d2108d21f1071ae,
            mid_init$_7fe9da35cd6952f4,
            mid_g_ac6fccc69d1b2d9e,
            mid_getBody_dc8275c31111ad9c,
            mid_getLongitude_9981f74b2d109da6,
            mid_init_357211ab77703f3f,
            mid_create_1061f3b179e5c03d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldLongitudeCrossingDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldLongitudeCrossingDetector(const FieldLongitudeCrossingDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldLongitudeCrossingDetector(const ::org::hipparchus::Field &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
          FieldLongitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
          jdouble getLongitude() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldLongitudeCrossingDetector);
        extern PyTypeObject *PY_TYPE(FieldLongitudeCrossingDetector);

        class t_FieldLongitudeCrossingDetector {
        public:
          PyObject_HEAD
          FieldLongitudeCrossingDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldLongitudeCrossingDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldLongitudeCrossingDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldLongitudeCrossingDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
