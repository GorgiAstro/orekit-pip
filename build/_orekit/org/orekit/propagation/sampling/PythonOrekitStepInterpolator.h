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
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
      class SpacecraftState;
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
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getCurrentState_c6311115fea01a34,
            mid_getInterpolatedState_fbff2ff5554d95e1,
            mid_getPreviousState_c6311115fea01a34,
            mid_isCurrentStateInterpolated_b108b35ef48e27bd,
            mid_isForward_b108b35ef48e27bd,
            mid_isPreviousStateInterpolated_b108b35ef48e27bd,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_restrictStep_470f776a59a8cb6f,
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
