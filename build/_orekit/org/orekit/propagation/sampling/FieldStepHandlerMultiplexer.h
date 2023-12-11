#ifndef org_orekit_propagation_sampling_FieldStepHandlerMultiplexer_H
#define org_orekit_propagation_sampling_FieldStepHandlerMultiplexer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitFixedStepHandler;
        class FieldOrekitStepInterpolator;
        class FieldOrekitStepHandler;
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

        class FieldStepHandlerMultiplexer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_add_69a7e501f9a938a3,
            mid_add_c9f4018f814d2514,
            mid_clear_0640e6acf969ed28,
            mid_finish_b66c84a5711243d5,
            mid_getHandlers_0d9551367f7ecdef,
            mid_handleStep_c006764357a9d9b2,
            mid_init_811e49dad2467b67,
            mid_remove_a1360aa6c3a89612,
            mid_remove_69a7e501f9a938a3,
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
