#ifndef org_orekit_propagation_sampling_EmptyMultiSatStepHandler_H
#define org_orekit_propagation_sampling_EmptyMultiSatStepHandler_H

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
        class MultiSatStepHandler;
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

        class EmptyMultiSatStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_finish_65de9727799c5641,
            mid_handleStep_65de9727799c5641,
            mid_init_9864bb25319e03a0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmptyMultiSatStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmptyMultiSatStepHandler(const EmptyMultiSatStepHandler& obj) : ::java::lang::Object(obj) {}

          EmptyMultiSatStepHandler();

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
        extern PyType_Def PY_TYPE_DEF(EmptyMultiSatStepHandler);
        extern PyTypeObject *PY_TYPE(EmptyMultiSatStepHandler);

        class t_EmptyMultiSatStepHandler {
        public:
          PyObject_HEAD
          EmptyMultiSatStepHandler object;
          static PyObject *wrap_Object(const EmptyMultiSatStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
