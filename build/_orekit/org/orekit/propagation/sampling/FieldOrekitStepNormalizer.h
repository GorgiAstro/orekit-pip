#ifndef org_orekit_propagation_sampling_FieldOrekitStepNormalizer_H
#define org_orekit_propagation_sampling_FieldOrekitStepNormalizer_H

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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class FieldOrekitStepNormalizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c9f4018f814d2514,
            mid_finish_b66c84a5711243d5,
            mid_getFixedStepHandler_a49ed83bbdd0eefd,
            mid_getFixedTimeStep_613c8f46c659f636,
            mid_handleStep_c006764357a9d9b2,
            mid_init_811e49dad2467b67,
            mid_requiresDenseOutput_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldOrekitStepNormalizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldOrekitStepNormalizer(const FieldOrekitStepNormalizer& obj) : ::java::lang::Object(obj) {}

          FieldOrekitStepNormalizer(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler &);

          void finish(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler getFixedStepHandler() const;
          ::org::hipparchus::CalculusFieldElement getFixedTimeStep() const;
          void handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          jboolean requiresDenseOutput() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldOrekitStepNormalizer);
        extern PyTypeObject *PY_TYPE(FieldOrekitStepNormalizer);

        class t_FieldOrekitStepNormalizer {
        public:
          PyObject_HEAD
          FieldOrekitStepNormalizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldOrekitStepNormalizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldOrekitStepNormalizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldOrekitStepNormalizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
