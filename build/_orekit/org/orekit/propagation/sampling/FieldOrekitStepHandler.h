#ifndef org_orekit_propagation_sampling_FieldOrekitStepHandler_H
#define org_orekit_propagation_sampling_FieldOrekitStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
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
      namespace sampling {

        class FieldOrekitStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_52154b94d63e10ed,
            mid_handleStep_9eedcf3b856fcc75,
            mid_init_acdd8180a5dc1a8d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldOrekitStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldOrekitStepHandler(const FieldOrekitStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
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
      namespace sampling {
        extern PyType_Def PY_TYPE_DEF(FieldOrekitStepHandler);
        extern PyTypeObject *PY_TYPE(FieldOrekitStepHandler);

        class t_FieldOrekitStepHandler {
        public:
          PyObject_HEAD
          FieldOrekitStepHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldOrekitStepHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldOrekitStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldOrekitStepHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
