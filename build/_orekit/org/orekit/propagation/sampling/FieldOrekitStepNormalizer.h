#ifndef org_orekit_propagation_sampling_FieldOrekitStepNormalizer_H
#define org_orekit_propagation_sampling_FieldOrekitStepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitStepHandler;
        class FieldOrekitStepInterpolator;
        class FieldOrekitFixedStepHandler;
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
            mid_init$_b6d4e0fa68ea09a5,
            mid_finish_8062511934471166,
            mid_getFixedStepHandler_eedcac4540424e57,
            mid_getFixedTimeStep_08d37e3f77b7239d,
            mid_handleStep_33c76379cdb8499a,
            mid_init_357211ab77703f3f,
            mid_requiresDenseOutput_eee3de00fe971136,
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
