#ifndef org_orekit_propagation_sampling_PythonOrekitStepHandler_H
#define org_orekit_propagation_sampling_PythonOrekitStepHandler_H

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
        class OrekitStepHandler;
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

        class PythonOrekitStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_finish_72b846eb87f3af9a,
            mid_handleStep_9db9d9fe85cac7f9,
            mid_init_14deaae988292d42,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonOrekitStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonOrekitStepHandler(const PythonOrekitStepHandler& obj) : ::java::lang::Object(obj) {}

          PythonOrekitStepHandler();

          void finalize() const;
          void finish(const ::org::orekit::propagation::SpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonOrekitStepHandler);
        extern PyTypeObject *PY_TYPE(PythonOrekitStepHandler);

        class t_PythonOrekitStepHandler {
        public:
          PyObject_HEAD
          PythonOrekitStepHandler object;
          static PyObject *wrap_Object(const PythonOrekitStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
