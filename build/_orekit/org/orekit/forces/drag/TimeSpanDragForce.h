#ifndef org_orekit_forces_drag_TimeSpanDragForce_H
#define org_orekit_forces_drag_TimeSpanDragForce_H

#include "org/orekit/forces/drag/AbstractDragForceModel.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeScale;
      class FieldAbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
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
  }
  namespace hipparchus {
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
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
            mid_init$_f2f0fa9d3d8aa425,
            mid_init$_508739e3461beebd,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_addDragSensitiveValidAfter_f34a04b649f6c1dc,
            mid_addDragSensitiveValidBefore_f34a04b649f6c1dc,
            mid_extractDragSensitiveRange_d943d113c5f78644,
            mid_extractParameters_f6f6c8fcf1e496fb,
            mid_extractParameters_f4e70a6b1a1cf5f6,
            mid_getDragSensitive_7ecdf335bc4f7d48,
            mid_getDragSensitiveSpan_7b19e06f3155cde2,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getFirstSpan_ea49fa2ad441b95d,
            mid_getParametersDrivers_d751c1a57012b438,
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

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
