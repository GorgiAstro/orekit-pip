#ifndef org_orekit_propagation_sampling_OrekitStepInterpolator_H
#define org_orekit_propagation_sampling_OrekitStepInterpolator_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
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

        class OrekitStepInterpolator : public ::org::orekit::utils::PVCoordinatesProvider {
         public:
          enum {
            mid_getCurrentState_8fbfa58855031235,
            mid_getInterpolatedState_1e982279849c3b65,
            mid_getPVCoordinates_6236a35378ed47a5,
            mid_getPreviousState_8fbfa58855031235,
            mid_isCurrentStateInterpolated_eee3de00fe971136,
            mid_isForward_eee3de00fe971136,
            mid_isPreviousStateInterpolated_eee3de00fe971136,
            mid_restrictStep_fa53c719225d17c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitStepInterpolator(jobject obj) : ::org::orekit::utils::PVCoordinatesProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitStepInterpolator(const OrekitStepInterpolator& obj) : ::org::orekit::utils::PVCoordinatesProvider(obj) {}

          ::org::orekit::propagation::SpacecraftState getCurrentState() const;
          ::org::orekit::propagation::SpacecraftState getInterpolatedState(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::org::orekit::propagation::SpacecraftState getPreviousState() const;
          jboolean isCurrentStateInterpolated() const;
          jboolean isForward() const;
          jboolean isPreviousStateInterpolated() const;
          OrekitStepInterpolator restrictStep(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitStepInterpolator);
        extern PyTypeObject *PY_TYPE(OrekitStepInterpolator);

        class t_OrekitStepInterpolator {
        public:
          PyObject_HEAD
          OrekitStepInterpolator object;
          static PyObject *wrap_Object(const OrekitStepInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
