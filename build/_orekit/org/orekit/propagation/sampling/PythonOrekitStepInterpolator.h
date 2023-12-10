#ifndef org_orekit_propagation_sampling_PythonOrekitStepInterpolator_H
#define org_orekit_propagation_sampling_PythonOrekitStepInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class PythonOrekitStepInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_finalize_7ae3461a92a43152,
            mid_getCurrentState_dd3e4a8d51055f1f,
            mid_getInterpolatedState_889031abe87f3b14,
            mid_getPreviousState_dd3e4a8d51055f1f,
            mid_isCurrentStateInterpolated_e470b6d9e0d979db,
            mid_isForward_e470b6d9e0d979db,
            mid_isPreviousStateInterpolated_e470b6d9e0d979db,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            mid_restrictStep_da619a9456840a3b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonOrekitStepInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonOrekitStepInterpolator(const PythonOrekitStepInterpolator& obj) : ::java::lang::Object(obj) {}

          PythonOrekitStepInterpolator();

          void finalize() const;
          ::org::orekit::propagation::SpacecraftState getCurrentState() const;
          ::org::orekit::propagation::SpacecraftState getInterpolatedState(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::propagation::SpacecraftState getPreviousState() const;
          jboolean isCurrentStateInterpolated() const;
          jboolean isForward() const;
          jboolean isPreviousStateInterpolated() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::orekit::propagation::sampling::OrekitStepInterpolator restrictStep(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonOrekitStepInterpolator);
        extern PyTypeObject *PY_TYPE(PythonOrekitStepInterpolator);

        class t_PythonOrekitStepInterpolator {
        public:
          PyObject_HEAD
          PythonOrekitStepInterpolator object;
          static PyObject *wrap_Object(const PythonOrekitStepInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
