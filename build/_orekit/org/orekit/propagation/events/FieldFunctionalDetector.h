#ifndef org_orekit_propagation_events_FieldFunctionalDetector_H
#define org_orekit_propagation_events_FieldFunctionalDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldFunctionalDetector;
      }
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

        class FieldFunctionalDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_205c34b8e33cf33f,
            mid_g_cc79c2733879de35,
            mid_create_c769ae7d904ec085,
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
