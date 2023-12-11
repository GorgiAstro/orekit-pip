#ifndef org_orekit_propagation_sampling_FieldOrekitStepInterpolator_H
#define org_orekit_propagation_sampling_FieldOrekitStepInterpolator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
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

        class FieldOrekitStepInterpolator : public ::org::orekit::utils::FieldPVCoordinatesProvider {
         public:
          enum {
            mid_getCurrentState_381b3e011cde018d,
            mid_getInterpolatedState_5324cbf9e5ce58fe,
            mid_getPVCoordinates_4ac52e75113a03db,
            mid_getPreviousState_381b3e011cde018d,
            mid_isForward_89b302893bdbe1f1,
            mid_restrictStep_b313908ffec3e8d3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldOrekitStepInterpolator(jobject obj) : ::org::orekit::utils::FieldPVCoordinatesProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldOrekitStepInterpolator(const FieldOrekitStepInterpolator& obj) : ::org::orekit::utils::FieldPVCoordinatesProvider(obj) {}

          ::org::orekit::propagation::FieldSpacecraftState getCurrentState() const;
          ::org::orekit::propagation::FieldSpacecraftState getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::propagation::FieldSpacecraftState getPreviousState() const;
          jboolean isForward() const;
          FieldOrekitStepInterpolator restrictStep(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldOrekitStepInterpolator);
        extern PyTypeObject *PY_TYPE(FieldOrekitStepInterpolator);

        class t_FieldOrekitStepInterpolator {
        public:
          PyObject_HEAD
          FieldOrekitStepInterpolator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldOrekitStepInterpolator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldOrekitStepInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldOrekitStepInterpolator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
