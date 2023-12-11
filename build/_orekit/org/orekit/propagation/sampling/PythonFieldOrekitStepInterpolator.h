#ifndef org_orekit_propagation_sampling_PythonFieldOrekitStepInterpolator_H
#define org_orekit_propagation_sampling_PythonFieldOrekitStepInterpolator_H

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
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getCurrentState_381b3e011cde018d,
            mid_getInterpolatedState_5324cbf9e5ce58fe,
            mid_getPreviousState_381b3e011cde018d,
            mid_isForward_89b302893bdbe1f1,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_restrictStep_b313908ffec3e8d3,
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
