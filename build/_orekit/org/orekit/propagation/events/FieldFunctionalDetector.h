#ifndef org_orekit_propagation_events_FieldFunctionalDetector_H
#define org_orekit_propagation_events_FieldFunctionalDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldFunctionalDetector;
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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

        class FieldFunctionalDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_979ae7f57a96b096,
            mid_g_de1c2d709eb2829c,
            mid_create_7866f1fd33c539a5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldFunctionalDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldFunctionalDetector(const FieldFunctionalDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldFunctionalDetector(const ::org::hipparchus::Field &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldFunctionalDetector);
        extern PyTypeObject *PY_TYPE(FieldFunctionalDetector);

        class t_FieldFunctionalDetector {
        public:
          PyObject_HEAD
          FieldFunctionalDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldFunctionalDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldFunctionalDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldFunctionalDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
