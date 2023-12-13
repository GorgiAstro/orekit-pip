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
            mid_init$_a1fa5dae97ea5ed2,
            mid_add_3c714d0cca30d176,
            mid_add_6e0fc70b103d8967,
            mid_clear_a1fa5dae97ea5ed2,
            mid_finish_280c3390961e0a50,
            mid_getHandlers_e62d3bb06d56d7e3,
            mid_handleStep_13c351c10f00bcd7,
            mid_init_2d7f9a496c7e9781,
            mid_remove_65541bbc9078acc7,
            mid_remove_3c714d0cca30d176,
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
