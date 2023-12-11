#ifndef org_orekit_propagation_sampling_PythonMultiSatFixedStepHandler_H
#define org_orekit_propagation_sampling_PythonMultiSatFixedStepHandler_H

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
    namespace propagation {
      namespace sampling {
        class MultiSatFixedStepHandler;
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

        class PythonMultiSatFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_finish_4ccaedadb068bdeb,
            mid_handleStep_4ccaedadb068bdeb,
            mid_init_fefad6c1f262d1e2,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonMultiSatFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonMultiSatFixedStepHandler(const PythonMultiSatFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          PythonMultiSatFixedStepHandler();

          void finalize() const;
          void finish(const ::java::util::List &) const;
          void handleStep(const ::java::util::List &) const;
          void init(const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonMultiSatFixedStepHandler);
        extern PyTypeObject *PY_TYPE(PythonMultiSatFixedStepHandler);

        class t_PythonMultiSatFixedStepHandler {
        public:
          PyObject_HEAD
          PythonMultiSatFixedStepHandler object;
          static PyObject *wrap_Object(const PythonMultiSatFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
