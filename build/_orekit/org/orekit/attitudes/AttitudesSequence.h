#ifndef org_orekit_attitudes_AttitudesSequence_H
#define org_orekit_attitudes_AttitudesSequence_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      class Propagator;
      class FieldPropagator;
    }
    namespace attitudes {
      class AttitudesSequence$SwitchHandler;
      class Attitude;
      class FieldAttitude;
      class AttitudeProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class AngularDerivativesFilter;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
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
          mid_init$_0fa09c18fee449d5,
          mid_addSwitchingCondition_b09582ddb3381fe1,
          mid_getAttitude_4e541876ea7d5bd0,
          mid_getAttitude_d2b70935d932b5c5,
          mid_getAttitudeRotation_29422c22de775b74,
          mid_getAttitudeRotation_53a81d4d17b13463,
          mid_registerSwitchEvents_a4d05ab8d79173b5,
          mid_registerSwitchEvents_ec733b762a879d62,
          mid_resetActiveProvider_3cff7c75ea06698c,
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
