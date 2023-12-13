#ifndef org_orekit_propagation_sampling_MultiSatStepHandler_H
#define org_orekit_propagation_sampling_MultiSatStepHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
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

        class MultiSatStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_0e7c3032c7c93ed3,
            mid_handleStep_0e7c3032c7c93ed3,
            mid_init_0365da66b6e36325,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiSatStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiSatStepHandler(const MultiSatStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::java::util::List &) const;
          void handleStep(const ::java::util::List &) const;
          void init(const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiSatStepHandler);
        extern PyTypeObject *PY_TYPE(MultiSatStepHandler);

        class t_MultiSatStepHandler {
        public:
          PyObject_HEAD
          MultiSatStepHandler object;
          static PyObject *wrap_Object(const MultiSatStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
