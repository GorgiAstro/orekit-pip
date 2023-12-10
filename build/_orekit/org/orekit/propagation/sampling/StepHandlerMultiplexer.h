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
        class OrekitStepHandler;
        class OrekitFixedStepHandler;
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

        class StepHandlerMultiplexer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_add_bacb99df21c3a796,
            mid_add_768baea54d9d6ae5,
            mid_clear_0fa09c18fee449d5,
            mid_finish_0ee5c56004643a2e,
            mid_getHandlers_2afa36052df4765d,
            mid_handleStep_aa75aa80a734fb3b,
            mid_init_826b4eda94da4e78,
            mid_remove_6747b2cdc04692d7,
            mid_remove_bacb99df21c3a796,
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
