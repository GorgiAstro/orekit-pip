#ifndef org_orekit_attitudes_AttitudesSequence_H
#define org_orekit_attitudes_AttitudesSequence_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class Propagator;
      class FieldPropagator;
      namespace events {
        class EventDetector;
      }
    }
    namespace attitudes {
      class AttitudeProvider;
      class Attitude;
      class FieldAttitude;
      class AttitudesSequence$SwitchHandler;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
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
    namespace attitudes {

      class AttitudesSequence : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_addSwitchingCondition_0d2c16de1f34e1d0,
          mid_getAttitude_455b5c75f9292826,
          mid_getAttitude_5341a8481841f90c,
          mid_getAttitudeRotation_969253bc78d7a272,
          mid_getAttitudeRotation_01363f58d35f60d4,
          mid_registerSwitchEvents_d2c685c0565d437e,
          mid_registerSwitchEvents_b00225cd75c7864b,
          mid_resetActiveProvider_8109c1a27d4471d3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AttitudesSequence(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AttitudesSequence(const AttitudesSequence& obj) : ::java::lang::Object(obj) {}

        AttitudesSequence();

        void addSwitchingCondition(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::propagation::events::EventDetector &, jboolean, jboolean, jdouble, const ::org::orekit::utils::AngularDerivativesFilter &, const ::org::orekit::attitudes::AttitudesSequence$SwitchHandler &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        void registerSwitchEvents(const ::org::orekit::propagation::Propagator &) const;
        void registerSwitchEvents(const ::org::hipparchus::Field &, const ::org::orekit::propagation::FieldPropagator &) const;
        void resetActiveProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(AttitudesSequence);
      extern PyTypeObject *PY_TYPE(AttitudesSequence);

      class t_AttitudesSequence {
      public:
        PyObject_HEAD
        AttitudesSequence object;
        static PyObject *wrap_Object(const AttitudesSequence&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
