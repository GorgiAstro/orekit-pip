#ifndef org_orekit_propagation_sampling_PythonFieldOrekitStepInterpolator_H
#define org_orekit_propagation_sampling_PythonFieldOrekitStepInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
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
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getCurrentState_02cea343d9f71933,
            mid_getInterpolatedState_f6f1ea8aef3019eb,
            mid_getPreviousState_02cea343d9f71933,
            mid_isForward_b108b35ef48e27bd,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_restrictStep_7098fa5da93d95de,
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
