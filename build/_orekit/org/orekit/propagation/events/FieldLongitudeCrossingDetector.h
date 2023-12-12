#ifndef org_orekit_propagation_events_FieldLongitudeCrossingDetector_H
#define org_orekit_propagation_events_FieldLongitudeCrossingDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
            mid_init$_1287f091a4811e16,
            mid_init$_a783394cef2e1482,
            mid_g_de1c2d709eb2829c,
            mid_getBody_0c55bd1adf955c4c,
            mid_getLongitude_557b8123390d8d0c,
            mid_init_811e49dad2467b67,
            mid_create_2f78741e845283c1,
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
