#ifndef org_orekit_propagation_sampling_StepHandlerMultiplexer_H
#define org_orekit_propagation_sampling_StepHandlerMultiplexer_H

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
        class OrekitFixedStepHandler;
        class OrekitStepInterpolator;
        class OrekitStepHandler;
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

        class StepHandlerMultiplexer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_add_a99d5b52ca8703a8,
            mid_add_e1387cf2cfecde7f,
            mid_clear_ff7cb6c242604316,
            mid_finish_72b846eb87f3af9a,
            mid_getHandlers_d751c1a57012b438,
            mid_handleStep_9db9d9fe85cac7f9,
            mid_init_14deaae988292d42,
            mid_remove_f2592a12facd1d6e,
            mid_remove_a99d5b52ca8703a8,
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
