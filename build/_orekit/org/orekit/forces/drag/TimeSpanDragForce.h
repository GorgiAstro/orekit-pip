#ifndef org_orekit_forces_drag_TimeSpanDragForce_H
#define org_orekit_forces_drag_TimeSpanDragForce_H

#include "org/orekit/forces/drag/AbstractDragForceModel.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class TimeSpanMap$Span;
      class ParameterDriver;
      class TimeSpanMap;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        class TimeSpanDragForce : public ::org::orekit::forces::drag::AbstractDragForceModel {
         public:
          enum {
            mid_init$_47c8c3109a8b7c41,
            mid_init$_55ce961c64ea54a7,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_addDragSensitiveValidAfter_4d838ef2b1c30430,
            mid_addDragSensitiveValidBefore_4d838ef2b1c30430,
            mid_extractDragSensitiveRange_56889532bb31616d,
            mid_extractParameters_020d17bb8c285475,
            mid_extractParameters_547c908eaeea187e,
            mid_getDragSensitive_7254da19cc7a4040,
            mid_getDragSensitiveSpan_561a18a65c5f000d,
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_getFirstSpan_971209c2bf2033e7,
            mid_getParametersDrivers_2afa36052df4765d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeSpanDragForce(jobject obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeSpanDragForce(const TimeSpanDragForce& obj) : ::org::orekit::forces::drag::AbstractDragForceModel(obj) {}

          static ::java::lang::String *DATE_AFTER;
          static ::java::lang::String *DATE_BEFORE;

          TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere &, const ::org::orekit::forces::drag::DragSensitive &);
          TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere &, const ::org::orekit::forces::drag::DragSensitive &, const ::org::orekit::time::TimeScale &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          void addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive &, const ::org::orekit::time::AbsoluteDate &) const;
          void addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< jdouble > extractParameters(const JArray< jdouble > &, const ::org::orekit::time::AbsoluteDate &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::forces::drag::DragSensitive getDragSensitive(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap$Span getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::TimeSpanMap$Span getFirstSpan() const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        extern PyType_Def PY_TYPE_DEF(TimeSpanDragForce);
        extern PyTypeObject *PY_TYPE(TimeSpanDragForce);

        class t_TimeSpanDragForce {
        public:
          PyObject_HEAD
          TimeSpanDragForce object;
          static PyObject *wrap_Object(const TimeSpanDragForce&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
