#ifndef org_orekit_propagation_sampling_OrekitStepInterpolator_H
#define org_orekit_propagation_sampling_OrekitStepInterpolator_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
      }
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_getCurrentState_9d155cc8314c99cf,
            mid_getInterpolatedState_4f0008999861ca31,
            mid_getPVCoordinates_e5d15ef236cd9ffe,
            mid_getPreviousState_9d155cc8314c99cf,
            mid_isCurrentStateInterpolated_9ab94ac1dc23b105,
            mid_isForward_9ab94ac1dc23b105,
            mid_isPreviousStateInterpolated_9ab94ac1dc23b105,
            mid_restrictStep_975f0f3ab8227725,
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
