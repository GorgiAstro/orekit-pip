#ifndef org_orekit_propagation_events_FieldLatitudeCrossingDetector_H
#define org_orekit_propagation_events_FieldLatitudeCrossingDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
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

        class FieldLatitudeCrossingDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_1287f091a4811e16,
            mid_init$_a783394cef2e1482,
            mid_g_de1c2d709eb2829c,
            mid_getBody_0c55bd1adf955c4c,
            mid_getLatitude_557b8123390d8d0c,
            mid_create_a84be14494f527bd,
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
