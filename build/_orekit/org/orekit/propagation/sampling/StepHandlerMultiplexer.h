#ifndef org_orekit_propagation_sampling_StepHandlerMultiplexer_H
#define org_orekit_propagation_sampling_StepHandlerMultiplexer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
        class OrekitFixedStepHandler;
        class OrekitStepHandler;
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

        class StepHandlerMultiplexer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_add_94f65743c8fc9296,
            mid_add_53f2c5a5fdcdc0f4,
            mid_clear_0640e6acf969ed28,
            mid_finish_8655761ebf04b503,
            mid_getHandlers_0d9551367f7ecdef,
            mid_handleStep_729a66b1e94503de,
            mid_init_0472264ad6f40bc2,
            mid_remove_dc90a418e189ba18,
            mid_remove_94f65743c8fc9296,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepHandlerMultiplexer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepHandlerMultiplexer(const StepHandlerMultiplexer& obj) : ::java::lang::Object(obj) {}

          StepHandlerMultiplexer();

          void add(const ::org::orekit::propagation::sampling::OrekitStepHandler &) const;
          void add(jdouble, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler &) const;
          void clear() const;
          void finish(const ::org::orekit::propagation::SpacecraftState &) const;
          ::java::util::List getHandlers() const;
          void handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          void remove(const ::org::orekit::propagation::sampling::OrekitFixedStepHandler &) const;
          void remove(const ::org::orekit::propagation::sampling::OrekitStepHandler &) const;
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
        extern PyType_Def PY_TYPE_DEF(StepHandlerMultiplexer);
        extern PyTypeObject *PY_TYPE(StepHandlerMultiplexer);

        class t_StepHandlerMultiplexer {
        public:
          PyObject_HEAD
          StepHandlerMultiplexer object;
          static PyObject *wrap_Object(const StepHandlerMultiplexer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
