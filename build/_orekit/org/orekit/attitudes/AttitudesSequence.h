#ifndef org_orekit_attitudes_AttitudesSequence_H
#define org_orekit_attitudes_AttitudesSequence_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class FieldAttitude;
      class Attitude;
      class AttitudesSequence$SwitchHandler;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class AngularDerivativesFilter;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldPropagator;
      class Propagator;
      namespace events {
        class EventDetector;
      }
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
          mid_init$_ff7cb6c242604316,
          mid_addSwitchingCondition_db5ac9dd692378ee,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitude_a02177519e1b6a45,
          mid_getAttitudeRotation_267252ddff45220c,
          mid_getAttitudeRotation_494718838b66cf03,
          mid_registerSwitchEvents_f334dbd717e289d2,
          mid_registerSwitchEvents_97ccbc8d3d017572,
          mid_resetActiveProvider_fddd0a7d9f33bafa,
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
