#ifndef org_orekit_propagation_sampling_PythonFieldOrekitFixedStepHandler_H
#define org_orekit_propagation_sampling_PythonFieldOrekitFixedStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitFixedStepHandler;
      }
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class PythonFieldOrekitFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_finish_b66c84a5711243d5,
            mid_handleStep_b66c84a5711243d5,
            mid_init_1b5a30d717840b16,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldOrekitFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldOrekitFixedStepHandler(const PythonFieldOrekitFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          PythonFieldOrekitFixedStepHandler();

          void finalize() const;
          void finish(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldOrekitFixedStepHandler);
        extern PyTypeObject *PY_TYPE(PythonFieldOrekitFixedStepHandler);

        class t_PythonFieldOrekitFixedStepHandler {
        public:
          PyObject_HEAD
          PythonFieldOrekitFixedStepHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldOrekitFixedStepHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldOrekitFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldOrekitFixedStepHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
