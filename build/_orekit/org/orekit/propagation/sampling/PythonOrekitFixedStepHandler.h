#ifndef org_orekit_propagation_sampling_PythonOrekitFixedStepHandler_H
#define org_orekit_propagation_sampling_PythonOrekitFixedStepHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitFixedStepHandler;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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

        class PythonOrekitFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_finish_72b846eb87f3af9a,
            mid_handleStep_72b846eb87f3af9a,
            mid_init_c410ce24bfc8448e,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonOrekitFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonOrekitFixedStepHandler(const PythonOrekitFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          PythonOrekitFixedStepHandler();

          void finalize() const;
          void finish(const ::org::orekit::propagation::SpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::SpacecraftState &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonOrekitFixedStepHandler);
        extern PyTypeObject *PY_TYPE(PythonOrekitFixedStepHandler);

        class t_PythonOrekitFixedStepHandler {
        public:
          PyObject_HEAD
          PythonOrekitFixedStepHandler object;
          static PyObject *wrap_Object(const PythonOrekitFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
