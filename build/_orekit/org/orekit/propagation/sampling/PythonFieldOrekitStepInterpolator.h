#ifndef org_orekit_propagation_sampling_PythonFieldOrekitStepInterpolator_H
#define org_orekit_propagation_sampling_PythonFieldOrekitStepInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitStepInterpolator;
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

        class PythonFieldOrekitStepInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getCurrentState_a74be2e38786f3b6,
            mid_getInterpolatedState_fb689a9c0f30b938,
            mid_getPreviousState_a74be2e38786f3b6,
            mid_isForward_eee3de00fe971136,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_restrictStep_accb7476fa222284,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldOrekitStepInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldOrekitStepInterpolator(const PythonFieldOrekitStepInterpolator& obj) : ::java::lang::Object(obj) {}

          PythonFieldOrekitStepInterpolator();

          void finalize() const;
          ::org::orekit::propagation::FieldSpacecraftState getCurrentState() const;
          ::org::orekit::propagation::FieldSpacecraftState getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::propagation::FieldSpacecraftState getPreviousState() const;
          jboolean isForward() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator restrictStep(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldOrekitStepInterpolator);
        extern PyTypeObject *PY_TYPE(PythonFieldOrekitStepInterpolator);

        class t_PythonFieldOrekitStepInterpolator {
        public:
          PyObject_HEAD
          PythonFieldOrekitStepInterpolator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldOrekitStepInterpolator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldOrekitStepInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldOrekitStepInterpolator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
