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
        class OrekitStepInterpolator;
        class MultiSatStepHandler;
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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_finish_aa335fea495d60e0,
            mid_handleStep_aa335fea495d60e0,
            mid_init_0b0c18b32ea71a29,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
