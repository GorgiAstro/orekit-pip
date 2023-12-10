#ifndef org_orekit_propagation_sampling_StepHandlerMultiplexer_H
#define org_orekit_propagation_sampling_StepHandlerMultiplexer_H

#include "java/lang/Object.h"

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
            mid_init$_7ae3461a92a43152,
            mid_add_dbe30cb4a191086d,
            mid_add_ae887d6ebf6ba107,
            mid_clear_7ae3461a92a43152,
            mid_finish_2b88003f931f70a7,
            mid_getHandlers_a6156df500549a58,
            mid_handleStep_eb797cf50ec4b2c4,
            mid_init_3d13474d79f5e7bc,
            mid_remove_1ab9ba6f7cccd409,
            mid_remove_dbe30cb4a191086d,
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
