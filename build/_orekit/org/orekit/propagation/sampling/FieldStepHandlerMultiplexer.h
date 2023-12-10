#ifndef org_orekit_propagation_sampling_FieldStepHandlerMultiplexer_H
#define org_orekit_propagation_sampling_FieldStepHandlerMultiplexer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitStepInterpolator;
        class FieldOrekitFixedStepHandler;
        class FieldOrekitStepHandler;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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

        class FieldStepHandlerMultiplexer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_add_16d47a327666f5ff,
            mid_add_465bcdb67e0beb29,
            mid_clear_0fa09c18fee449d5,
            mid_finish_1463d3d0d52f94dd,
            mid_getHandlers_2afa36052df4765d,
            mid_handleStep_edb529c141e8d4a9,
            mid_init_8e8de2be1664674a,
            mid_remove_5516e9ecb647e12b,
            mid_remove_16d47a327666f5ff,
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
