#ifndef org_orekit_propagation_sampling_OrekitFixedStepHandler_H
#define org_orekit_propagation_sampling_OrekitFixedStepHandler_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class OrekitFixedStepHandler : public ::java::lang::Object {
         public:
          enum {
            mid_finish_0ee5c56004643a2e,
            mid_handleStep_0ee5c56004643a2e,
            mid_init_eb5e26882ba2d9b9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitFixedStepHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitFixedStepHandler(const OrekitFixedStepHandler& obj) : ::java::lang::Object(obj) {}

          void finish(const ::org::orekit::propagation::SpacecraftState &) const;
          void handleStep(const ::org::orekit::propagation::SpacecraftState &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitFixedStepHandler);
        extern PyTypeObject *PY_TYPE(OrekitFixedStepHandler);

        class t_OrekitFixedStepHandler {
        public:
          PyObject_HEAD
          OrekitFixedStepHandler object;
          static PyObject *wrap_Object(const OrekitFixedStepHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
