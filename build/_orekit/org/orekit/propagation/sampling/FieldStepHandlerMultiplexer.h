#ifndef org_orekit_propagation_sampling_FieldStepHandlerMultiplexer_H
#define org_orekit_propagation_sampling_FieldStepHandlerMultiplexer_H

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
        class FieldOrekitFixedStepHandler;
        class FieldOrekitStepHandler;
        class FieldOrekitStepInterpolator;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class FieldStepHandlerMultiplexer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_add_94968e6ff3f0c115,
            mid_add_d41b45a1d6944ab5,
            mid_clear_7ae3461a92a43152,
            mid_finish_52154b94d63e10ed,
            mid_getHandlers_a6156df500549a58,
            mid_handleStep_9eedcf3b856fcc75,
            mid_init_acdd8180a5dc1a8d,
            mid_remove_a923adc5f153d682,
            mid_remove_94968e6ff3f0c115,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldStepHandlerMultiplexer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldStepHandlerMultiplexer(const FieldStepHandlerMultiplexer& obj) : ::java::lang::Object(obj) {}

          FieldStepHandlerMultiplexer();

          void add(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler &) const;
          void add(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler &) const;
          void clear() const;
          void finish(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::java::util::List getHandlers() const;
          void handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          void remove(const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler &) const;
          void remove(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldStepHandlerMultiplexer);
        extern PyTypeObject *PY_TYPE(FieldStepHandlerMultiplexer);

        class t_FieldStepHandlerMultiplexer {
        public:
          PyObject_HEAD
          FieldStepHandlerMultiplexer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldStepHandlerMultiplexer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldStepHandlerMultiplexer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldStepHandlerMultiplexer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
