#ifndef org_orekit_forces_drag_TimeSpanDragForce_H
#define org_orekit_forces_drag_TimeSpanDragForce_H

#include "org/orekit/forces/drag/AbstractDragForceModel.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap$Span;
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
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
            mid_init$_36405303e879e795,
            mid_init$_9273ddc3fafcf914,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_addDragSensitiveValidAfter_f5af29df76f15be7,
            mid_addDragSensitiveValidBefore_f5af29df76f15be7,
            mid_extractDragSensitiveRange_cdee4c9b841a225d,
            mid_extractParameters_2a4cb51cb18e4e8b,
            mid_extractParameters_32c7759b5aba450d,
            mid_getDragSensitive_29a3fe8bac56573a,
            mid_getDragSensitiveSpan_320d9b9cba67eeb8,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getFirstSpan_2a24ed7b7f6cbca3,
            mid_getParametersDrivers_0d9551367f7ecdef,
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
