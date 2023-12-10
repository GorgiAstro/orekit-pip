#ifndef org_orekit_propagation_sampling_PythonOrekitFixedStepHandler_H
#define org_orekit_propagation_sampling_PythonOrekitFixedStepHandler_H

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
        class OrekitFixedStepHandler;
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

        class PythonOrekitFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_finish_0ee5c56004643a2e,
            mid_handleStep_0ee5c56004643a2e,
            mid_init_eb5e26882ba2d9b9,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
