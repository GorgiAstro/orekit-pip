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
      class AttitudeProvider;
      class AttitudesSequence$SwitchHandler;
      class FieldAttitude;
      class Attitude;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class AngularDerivativesFilter;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class Rotation;
        }
      }
    }
    class Field;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_addSwitchingCondition_3344837cede29df1,
          mid_getAttitude_896ee4d68989b1e8,
          mid_getAttitude_21845cfb0034fe1c,
          mid_getAttitudeRotation_6acae55a2f5d3ab4,
          mid_getAttitudeRotation_1bc07ea175743b30,
          mid_registerSwitchEvents_7077d4247ef1c4a5,
          mid_registerSwitchEvents_3fe3cc96d879b6c1,
          mid_resetActiveProvider_8e4d3ea100bc0095,
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
