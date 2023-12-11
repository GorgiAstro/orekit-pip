#ifndef org_orekit_propagation_sampling_MultiSatStepHandler_H
#define org_orekit_propagation_sampling_MultiSatStepHandler_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_finish_4ccaedadb068bdeb,
            mid_handleStep_4ccaedadb068bdeb,
            mid_init_98fa7d48d3b7f88a,
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
