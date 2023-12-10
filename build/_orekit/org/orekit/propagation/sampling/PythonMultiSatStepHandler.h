#ifndef org_orekit_propagation_sampling_PythonMultiSatStepHandler_H
#define org_orekit_propagation_sampling_PythonMultiSatStepHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
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
        class MultiSatStepHandler;
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

        class PythonMultiSatStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_finish_de3e021e7266b71e,
            mid_handleStep_de3e021e7266b71e,
            mid_init_741f4d97cd6d356c,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonMultiSatStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonMultiSatStepHandler(const PythonMultiSatStepHandler& obj) : ::java::lang::Object(obj) {}

          PythonMultiSatStepHandler();

          void finalize() const;
          void finish(const ::java::util::List &) const;
          void handleStep(const ::java::util::List &) const;
          void init(const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonMultiSatStepHandler);
        extern PyTypeObject *PY_TYPE(PythonMultiSatStepHandler);

        class t_PythonMultiSatStepHandler {
        public:
          PyObject_HEAD
          PythonMultiSatStepHandler object;
          static PyObject *wrap_Object(const PythonMultiSatStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
