#ifndef org_orekit_propagation_sampling_PythonFieldOrekitStepHandler_H
#define org_orekit_propagation_sampling_PythonFieldOrekitStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace sampling {
        class FieldOrekitStepInterpolator;
        class FieldOrekitStepHandler;
      }
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

        class PythonFieldOrekitStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_finish_b66c84a5711243d5,
            mid_handleStep_c006764357a9d9b2,
            mid_init_811e49dad2467b67,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldOrekitStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldOrekitStepHandler(const PythonFieldOrekitStepHandler& obj) : ::java::lang::Object(obj) {}

          PythonFieldOrekitStepHandler();

          void finalize() const;
          void finish(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldOrekitStepHandler);
        extern PyTypeObject *PY_TYPE(PythonFieldOrekitStepHandler);

        class t_PythonFieldOrekitStepHandler {
        public:
          PyObject_HEAD
          PythonFieldOrekitStepHandler object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldOrekitStepHandler *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldOrekitStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldOrekitStepHandler&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
