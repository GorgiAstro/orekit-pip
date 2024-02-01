#ifndef org_orekit_propagation_sampling_FieldOrekitFixedStepHandler_H
#define org_orekit_propagation_sampling_FieldOrekitFixedStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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
      namespace sampling {

        class FieldOrekitFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_8062511934471166,
            mid_handleStep_8062511934471166,
            mid_init_8e7d4ddea41a1ea0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldOrekitFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldOrekitFixedStepHandler(const FieldOrekitFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        extern PyType_Def PY_TYPE_DEF(FieldOrekitFixedStepHandler);
        extern PyTypeObject *PY_TYPE(FieldOrekitFixedStepHandler);

        class t_FieldOrekitFixedStepHandler {
        public:
          PyObject_HEAD
          FieldOrekitFixedStepHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldOrekitFixedStepHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldOrekitFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldOrekitFixedStepHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
