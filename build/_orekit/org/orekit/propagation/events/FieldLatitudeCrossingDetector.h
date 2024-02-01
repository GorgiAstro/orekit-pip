#ifndef org_orekit_propagation_events_FieldLatitudeCrossingDetector_H
#define org_orekit_propagation_events_FieldLatitudeCrossingDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
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

        class FieldLatitudeCrossingDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_2d2108d21f1071ae,
            mid_init$_7fe9da35cd6952f4,
            mid_g_ac6fccc69d1b2d9e,
            mid_getBody_dc8275c31111ad9c,
            mid_getLatitude_9981f74b2d109da6,
            mid_create_486415863a3e51f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldLatitudeCrossingDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldLatitudeCrossingDetector(const FieldLatitudeCrossingDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldLatitudeCrossingDetector(const ::org::hipparchus::Field &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);
          FieldLatitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::bodies::OneAxisEllipsoid getBody() const;
          jdouble getLatitude() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldLatitudeCrossingDetector);
        extern PyTypeObject *PY_TYPE(FieldLatitudeCrossingDetector);

        class t_FieldLatitudeCrossingDetector {
        public:
          PyObject_HEAD
          FieldLatitudeCrossingDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldLatitudeCrossingDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldLatitudeCrossingDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldLatitudeCrossingDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
