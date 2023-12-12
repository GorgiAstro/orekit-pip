#ifndef org_orekit_attitudes_AttitudesSequence_H
#define org_orekit_attitudes_AttitudesSequence_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldPropagator;
      class Propagator;
      namespace events {
        class EventDetector;
      }
    }
    namespace attitudes {
      class AttitudesSequence$SwitchHandler;
      class FieldAttitude;
      class AttitudeProvider;
      class Attitude;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class AngularDerivativesFilter;
      class FieldPVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
        }
      }
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
          mid_init$_0640e6acf969ed28,
          mid_addSwitchingCondition_2882efe71e6f5a14,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitudeRotation_5c74bfcf2d42825a,
          mid_getAttitudeRotation_85bb0a19efdadc1d,
          mid_registerSwitchEvents_52713bb4a21e1f43,
          mid_registerSwitchEvents_341b878527f5b605,
          mid_resetActiveProvider_8fa6c0c067ead7b2,
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
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
