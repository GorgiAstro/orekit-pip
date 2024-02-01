#ifndef org_orekit_propagation_sampling_FieldOrekitStepInterpolator_H
#define org_orekit_propagation_sampling_FieldOrekitStepInterpolator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
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
            mid_getCurrentState_a74be2e38786f3b6,
            mid_getInterpolatedState_fb689a9c0f30b938,
            mid_getPVCoordinates_1b1a4229447f7bf7,
            mid_getPreviousState_a74be2e38786f3b6,
            mid_isForward_eee3de00fe971136,
            mid_restrictStep_accb7476fa222284,
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
