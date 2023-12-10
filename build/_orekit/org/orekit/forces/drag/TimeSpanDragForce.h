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
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class TimeSpanMap$Span;
      class ParameterDriver;
    }
    namespace forces {
      namespace drag {
        class DragSensitive;
      }
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_9d49a06389f1e886,
            mid_init$_bea16ae8e365aa2e,
            mid_acceleration_78989e44b99f7cc2,
            mid_acceleration_00aba28d3abe9a8c,
            mid_addDragSensitiveValidAfter_463b27ff4d36a75d,
            mid_addDragSensitiveValidBefore_463b27ff4d36a75d,
            mid_extractDragSensitiveRange_df7496d2771de2ea,
            mid_extractParameters_d7d552e275320f67,
            mid_extractParameters_8b177eb25e4eb468,
            mid_getDragSensitive_6eefaebd1c71d9b8,
            mid_getDragSensitiveSpan_e815c41e031d3908,
            mid_getEventDetectors_a68a17dd093f796d,
            mid_getFieldEventDetectors_1328ddb491531a35,
            mid_getFirstSpan_39a1e35b17737f60,
            mid_getParametersDrivers_a6156df500549a58,
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
