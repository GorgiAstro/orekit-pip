#ifndef org_orekit_propagation_sampling_MultiSatFixedStepHandler_H
#define org_orekit_propagation_sampling_MultiSatFixedStepHandler_H

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
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class MultiSatFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_65de9727799c5641,
            mid_handleStep_65de9727799c5641,
            mid_init_9519e3ce5d916ce8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiSatFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiSatFixedStepHandler(const MultiSatFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::java::util::List &) const;
          void handleStep(const ::java::util::List &) const;
          void init(const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiSatFixedStepHandler);
        extern PyTypeObject *PY_TYPE(MultiSatFixedStepHandler);

        class t_MultiSatFixedStepHandler {
        public:
          PyObject_HEAD
          MultiSatFixedStepHandler object;
          static PyObject *wrap_Object(const MultiSatFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif